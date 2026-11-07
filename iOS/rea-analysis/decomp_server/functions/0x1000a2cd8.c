// rea decompile_all
// name: FUN_1000a2cd8
// address: 0x1000a2cd8
// body: available
// range: 0x1000a2cd8-0x1000a300b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000a2cd8(void)

{
  long lVar1;
  char acVar2 [8];
  code *pcVar3;
  char acVar4 [8];
  char acVar5 [8];
  undefined1 uVar6;
  long extraout_x8;
  char unaff_x20 [8];
  char acVar7 [8];
  char acVar8 [8];
  char acVar9 [8];
  char acVar10 [8];
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_e0 [16];
  char acStack_d0 [8];
  undefined8 uStack_c8;
  undefined4 local_c0;
  char local_b0 [8];
  char local_a8 [8];
  char local_a0 [8];
  byte local_98;
  uint local_90 [4];
  char local_80 [8];
  char local_78 [8];
  char local_70 [8];
  byte local_68;
  
  acVar2[0] = '\0';
  acVar2[1] = '\0';
  acVar2[2] = '\0';
  acVar2[3] = '\0';
  acVar2[4] = '\0';
  acVar2[5] = '\0';
  acVar2[6] = '\0';
  acVar2[7] = '\0';
  __s10Foundation12CharacterSetVMa();
  lVar11 = *(long *)((long)acVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  acVar8 = (char  [8])((long)&local_c0 + lVar1);
  pcVar3 = (code *)&DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_initStaticObject();
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE11getSpecific3keyxSgAC0dF3KeyCyxG_tlFZ
            (&local_c0,*(undefined8 *)((long)unaff_x20 + 0x18));
  if (local_c0._1_1_ == '\x01') {
    acVar7 = *(char (*) [8])((long)unaff_x20 + 0x10);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(char (*) [8])(acStack_d0 + lVar1) = unaff_x20;
    *(code **)((long)&uStack_c8 + lVar1) = pcVar3;
    pcVar3 = FUN_1000ab868;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&local_c0,FUN_1000ab868,auStack_e0 + lVar1,&DAT_10099a388);
    unaff_x20 = acVar7;
    acVar7 = local_b0;
    if ((local_98 & 1) != 0) goto LAB_1000a2e70;
    acVar7 = local_a8;
    acVar9 = local_b0;
    acVar10 = local_a0;
    if (local_c0 != 0) goto LAB_1000a2dfc;
LAB_1000a2f00:
    acVar7 = acVar9;
    _swift_bridgeObjectRetain(acVar9);
    __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(acVar8);
    FUN_10009ff0c();
    unaff_x20 = (char  [8])&local_c0;
    acVar4 = acVar8;
    acVar5 = (char  [8])PTR___sSSN_1009957f8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (acVar8,PTR___sSSN_1009957f8,acVar7);
    _swift_bridgeObjectRelease(acVar10);
    _swift_bridgeObjectRelease(acVar9);
    (**(code **)(lVar11 + 8))(acVar8,acVar2);
    _swift_bridgeObjectRelease(acVar9);
    acVar7 = acVar4;
    acVar8 = acVar5;
    FUN_1000aa098();
    if (acVar8 == (char  [8])0x0) {
      FUN_1000aacc0();
      _swift_allocError(&DAT_10099a280,acVar7,0,0);
      *(char (*) [8])acVar7 = acVar4;
      *(char (*) [8])((long)acVar7 + 8) = acVar5;
      *(undefined8 *)((long)acVar7 + 0x18) = 0;
      *(undefined8 *)((long)acVar7 + 0x20) = 0;
      *(undefined8 *)((long)acVar7 + 0x10) = 0;
      uVar6 = 1;
      goto LAB_1000a2eb8;
    }
    _swift_bridgeObjectRelease(acVar5);
    acVar2 = acVar7;
    FUN_1000aa8ac(acVar7,acVar8,0x322e33,0xe300000000000000);
    if (-1 < (long)acVar2) goto LAB_1000a2ec4;
    FUN_1000aacc0();
    _swift_allocError(&DAT_10099a280,acVar2,0,0);
    *(char (*) [8])acVar2 = acVar7;
    *(char (*) [8])((long)acVar2 + 8) = acVar8;
    *(undefined8 *)((long)acVar2 + 0x18) = 0xe300000000000000;
    *(undefined8 *)((long)acVar2 + 0x10) = 0x322e33;
    *(undefined8 *)((long)acVar2 + 0x20) = 0;
    *(undefined1 *)((long)acVar2 + 0x28) = 0;
  }
  else {
    FUN_1000a7cf4(local_90);
    acVar7 = local_80;
    local_a0 = local_70;
    if ((local_68 & 1) == 0) {
      acVar7 = local_78;
      acVar9 = local_80;
      acVar10 = local_70;
      local_c0 = local_90[0];
      if (local_90[0] == 0) goto LAB_1000a2f00;
LAB_1000a2dfc:
      acVar8[4] = '\0';
      acVar8[5] = '\0';
      acVar8[6] = '\0';
      acVar8[7] = '\0';
      acVar8[0] = (char)local_c0;
      acVar8[1] = (char)(local_c0 >> 8);
      acVar8[2] = (char)(local_c0 >> 0x10);
      acVar8[3] = (char)(local_c0 >> 0x18);
      FUN_1000aacc0();
      _swift_allocError(&DAT_10099a280,pcVar3,0,0);
      *(char (*) [8])((long)pcVar3 + 8) = (char  [8])0xe700000000000000;
      *(char (*) [8])pcVar3 = (char  [8])0x562d2078756d74;
      *(char (*) [8])((long)pcVar3 + 0x10) = acVar8;
      *(char (*) [8])((long)pcVar3 + 0x18) = acVar7;
      *(char (*) [8])((long)pcVar3 + 0x20) = acVar10;
      (*(char (*) [8])((long)pcVar3 + 0x28))[0] = '\x02';
      _swift_willThrow();
      _swift_bridgeObjectRelease(acVar9);
      goto LAB_1000a2ec4;
    }
LAB_1000a2e70:
    _swift_bridgeObjectRelease(local_a0);
    _swift_bridgeObjectRelease();
    FUN_1000aacc0();
    _swift_allocError(&DAT_10099a280,acVar7,0,0);
    *(undefined8 *)((long)acVar7 + 8) = 0xe700000000000000;
    *(char (*) [8])acVar7 = (char  [8])0x562d2078756d74;
    *(undefined8 *)((long)acVar7 + 0x18) = 0;
    *(undefined8 *)((long)acVar7 + 0x20) = 0;
    *(undefined8 *)((long)acVar7 + 0x10) = 0;
    uVar6 = 3;
LAB_1000a2eb8:
    *(undefined1 *)((long)acVar7 + 0x28) = uVar6;
    acVar7 = unaff_x20;
    acVar8 = acVar2;
  }
  _swift_willThrow();
LAB_1000a2ec4:
  auVar12[8] = acVar8[0];
  auVar12[9] = acVar8[1];
  auVar12[10] = acVar8[2];
  auVar12[0xb] = acVar8[3];
  auVar12[0xc] = acVar8[4];
  auVar12[0xd] = acVar8[5];
  auVar12[0xe] = acVar8[6];
  auVar12[0xf] = acVar8[7];
  auVar12[0] = acVar7[0];
  auVar12[1] = acVar7[1];
  auVar12[2] = acVar7[2];
  auVar12[3] = acVar7[3];
  auVar12[4] = acVar7[4];
  auVar12[5] = acVar7[5];
  auVar12[6] = acVar7[6];
  auVar12[7] = acVar7[7];
  return auVar12;
}

