// rea decompile_all
// name: FUN_1001ed194
// address: 0x1001ed194
// body: available
// range: 0x1001ed194-0x1001ed577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ed194(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  void *aBlock;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long lVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  lVar15 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_98 = lVar15;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x40000;
  _swift_slowAlloc(0x40000,0xffffffffffffffff);
  uVar7 = (ulong)*(uint *)(unaff_x20 + 0x18);
  _read(uVar7,lVar6,0x40000);
  if ((long)uVar7 < 1) {
    if ((long)uVar7 < 0) {
      __s6Darwin5errnos5Int32Vvg();
      iVar2 = (int)uVar7;
      if ((iVar2 != 0x23) && (__s6Darwin5errnos5Int32Vvg(), iVar2 != 4)) {
        uVar13 = 0;
        FUN_100401b14(0);
        FUN_1003fb45c(uVar13,FUN_1001f8dcc);
      }
    }
  }
  else {
    lVar14 = lVar6 + uVar7;
    lVar8 = lVar6;
    FUN_1001f8534();
    local_b8 = lVar3;
    local_a8 = lVar18;
    __s10Foundation4DateVACycfC(lVar15);
    lVar3 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
    local_a0 = lVar6;
    _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,&local_90,
                       0x21,0);
    (**(code **)(lVar16 + 0x28))(unaff_x20 + lVar3,lVar15,lVar5);
    _swift_endAccess(&local_90);
    FUN_1001ed6d4(lVar8,lVar14);
    uVar13 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onOutput);
    uVar1 = ((undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onOutput))[1];
    local_c8 = lVar17;
    local_c0 = lVar19;
    local_b0 = lVar4;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    uVar9 = uVar13;
    FUN_10004090c(uVar13,uVar1);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar10 = &DAT_1009a4830;
    local_d0 = uVar9;
    _swift_allocObject(&DAT_1009a4830,0x30,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar13;
    *(undefined8 *)(puVar10 + 0x18) = uVar1;
    *(long *)(puVar10 + 0x20) = lVar8;
    *(long *)(puVar10 + 0x28) = lVar14;
    local_70 = FUN_1001f8e08;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009a4848;
    local_68 = puVar10;
    aBlock = __Block_copy(&local_90);
    puVar10 = local_68;
    FUN_10004090c(uVar13,uVar1);
    FUN_100008184(lVar8,lVar14);
    _swift_release(puVar10);
    lVar5 = local_98;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_98);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar11 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar10 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar12 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    lVar6 = local_a0;
    lVar4 = local_b8;
    lVar3 = local_c8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_c8,&local_90,puVar10,puVar12,local_b8,puVar11);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar5,lVar3,aBlock);
    __Block_release(aBlock);
    FUN_100006cdc(lVar8,lVar14);
    FUN_10007ed2c(uVar13,uVar1);
    (**(code **)(local_a8 + 8))(lVar3,lVar4);
    (**(code **)(local_c0 + 8))(lVar5,local_b0);
  }
  _swift_slowDealloc(lVar6,0xffffffffffffffff,0xffffffffffffffff);
  return;
}

