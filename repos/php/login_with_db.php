<?php
        //<!--php부분 form에 입력한 내용을 데이터베이스와 비교해서 로그인 여부를 알려준다.-->
        $username=$_POST['id'];//post방식으로 보낸 데이터를 username이라는 변수에 a넣는다.
        $userpw=$_POST['pw'];//post방식으로 보낸 데이터를 userpw라는 변수에 넣는다.
        $conn=mysqli_connect('localhost', 'root', 'Ckdqja@1910', 'secu');
        //sql문을 sql변수에 저장해놓는다.
        $sql="select * from account where id = '$username' AND pw = '$userpw'";
        $res = mysqli_query($conn, $sql);
        $result= mysqli_num_rows($res);
        if($result==1)
        {
          echo "<script>location.href='gugu.html'</script>" ;
        }
        else
        {//쿼리문의 결과가 없으면 로그인 fail을 출력한다.
          echo "login fail";
        }
?>
