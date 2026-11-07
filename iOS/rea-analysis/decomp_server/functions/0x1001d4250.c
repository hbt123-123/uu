// rea decompile_all
// name: FUN_1001d4250
// address: 0x1001d4250
// body: available
// range: 0x1001d4250-0x1001d460f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d4250(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  undefined1 auStack_150 [16];
  undefined4 auStack_140 [4];
  ulong local_130;
  ulong *local_128;
  char *local_120;
  char *local_118;
  long local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f0 = *(long *)(lVar6 + -8);
  local_e8 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f0 + 0x40));
  lVar11 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_f8 = lVar11;
  __s8Dispatch0A3QoSVMa();
  local_108 = *(long *)(lVar6 + -8);
  lStack_100 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_108 + 0x40));
  lVar6 = _TtC14UURemoteServer15TerminalManager::sessions;
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar11;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_90,0,0);
  local_e0 = *(long *)(unaff_x20 + lVar6);
  local_128 = (ulong *)(local_e0 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(local_e0 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *local_128;
  local_130 = uVar12 + 0x3f >> 6;
  local_118 = "]: Process Exit & Stop Start";
  local_120 = s___Manager___stop_10089f0b0;
  _swift_bridgeObjectRetain();
  lVar6 = 0;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar6 << 6;
      local_cc = *(undefined4 *)(*(long *)(local_e0 + 0x30) + uVar12 * 4);
      lVar14 = *(long *)(*(long *)(local_e0 + 0x38) + uVar12 * 8);
      local_d8 = *(undefined8 *)(lVar14 + _TtC14UURemoteServer15TerminalSession::ioQueue);
      puVar7 = &DAT_1009a3c40;
      _swift_allocObject(&DAT_1009a3c40,0x18,7);
      _swift_weakInit(puVar7 + 0x10,lVar14);
      local_a0 = FUN_1001e454c;
      local_c0 = PTR___NSConcreteStackBlock_100995490;
      local_b8 = 0x42000000;
      local_b0 = FUN_1000acdb4;
      puStack_a8 = &DAT_1009a3e88;
      local_98 = puVar7;
      aBlock = __Block_copy(&local_c0);
      _swift_retain(lVar14);
      _swift_retain(puVar7);
      lVar1 = local_110;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_110);
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar8 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar9 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar10 = &DAT_100a75aa0;
      FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
      lVar3 = local_e8;
      lVar2 = local_f8;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f8,&local_c8,puVar9,puVar10,local_e8,puVar8);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar1,lVar2,aBlock);
      __Block_release(aBlock);
      (**(code **)(local_f0 + 8))(lVar2,lVar3);
      (**(code **)(local_108 + 8))(lVar1,lStack_100);
      puVar9 = local_98;
      _swift_release(puVar7);
      _swift_release(puVar9);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)(lVar11 + -0x10) = local_cc;
      FUN_1003fb48c(FUN_1001e4554,lVar11 + -0x20,0xd000000000000095,
                    (ulong)local_118 | 0x8000000000000000,&DAT_d000000000000013,
                    (ulong)local_120 | 0x8000000000000000,0x37c,0);
      _swift_release(lVar14);
    }
    bVar5 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar5) break;
    if ((long)local_130 <= lVar6) {
      _swift_release(local_e0);
      return;
    }
    uVar13 = local_128[lVar6];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d4610);
  (*pcVar4)();
}

