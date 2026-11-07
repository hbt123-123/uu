// rea decompile_all
// name: FUN_1002e27a4
// address: 0x1002e27a4
// body: available
// range: 0x1002e27a4-0x1002e2b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e27a4(long ****param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long ****pppplVar10;
  void *aBlock;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long ***ppplVar15;
  long ****pppplVar16;
  ulong uVar17;
  long ***ppplVar18;
  long ****pppplVar19;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  long local_f8;
  long lStack_f0;
  undefined1 *local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long ***local_c8;
  long ***local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  long ***local_90;
  long ***ppplStack_88;
  ulong local_80;
  long lStack_78;
  long **local_70;
  
  lVar6 = 0;
  local_108 = param_3;
  uStack_100 = param_4;
  local_d8 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e0 = *(long *)(lVar6 + -8);
  lVar13 = *(long *)(local_e0 + 0x40);
  lVar7 = 0;
  local_e8 = auStack_110 + -(lVar13 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar6;
  __s8Dispatch0A3QoSVMa();
  local_f8 = *(long *)(lVar7 + -8);
  lVar6 = (long)(auStack_110 + -(lVar13 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_f0 = lVar7;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar14 = -1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f);
    pppplVar19 = param_1 + 7;
    uVar17 = ~uVar14;
    uVar14 = -uVar14;
    uVar1 = 0xffffffffffffffff;
    if ((long)uVar14 < 0x40) {
      uVar1 = ~(-1L << (uVar14 & 0x3f));
    }
    ppplVar15 = (long ***)(uVar1 & (ulong)*pppplVar19);
    pppplVar10 = param_1;
    _swift_bridgeObjectRetain();
    lVar7 = 0;
  }
  else {
    pppplVar10 = (long ****)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      pppplVar10 = param_1;
    }
    _swift_bridgeObjectRetain(param_1);
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    uVar8 = 0;
    FUN_1002d4054(0);
    puVar9 = &DAT_100a84688;
    FUN_100005c90(&DAT_100a84688,FUN_1002d4054,0x1008189b8);
    __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&local_90,pppplVar10,uVar8,puVar9);
    lVar7 = lStack_78;
    uVar17 = local_80;
    ppplVar15 = (long ***)local_70;
    param_1 = (long ****)local_90;
    pppplVar19 = (long ****)ppplStack_88;
  }
  ppplVar18 = ppplVar15;
  lVar13 = lVar7;
  if ((long)param_1 < 0) goto LAB_1002e293c;
  while( true ) {
    while (ppplVar15 != (long ***)0x0) {
      uVar1 = ((ulong)ppplVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 |
              ((ulong)ppplVar15 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      pppplVar16 = *(long *****)
                    ((long)param_1[6] + (lVar7 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3));
      pppplVar10 = pppplVar16;
      _swift_retain();
      ppplVar15 = (long ***)((long)ppplVar15 - 1U & (ulong)ppplVar15);
      while( true ) {
        if (pppplVar16 == (long ****)0x0) goto LAB_1002e29b8;
        (*(code *)(*pppplVar16)[0x59])();
        _swift_release(pppplVar16);
        _swift_release();
        ppplVar18 = ppplVar15;
        lVar13 = lVar7;
        if (-1 < (long)param_1) break;
LAB_1002e293c:
        __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
        lVar13 = lVar7;
        if (pppplVar10 == (long ****)0x0) goto LAB_1002e29b8;
        uVar8 = 0;
        local_c8 = (long ***)pppplVar10;
        FUN_1002d4054(0);
        pppplVar10 = &local_c0;
        _swift_dynamicCast(pppplVar10,&local_c8,PTR___syXlN_100995e80 + 8,uVar8,7);
        ppplVar15 = ppplVar18;
        pppplVar16 = (long ****)local_c0;
      }
    }
    bVar5 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002e2b3c);
      (*pcVar4)();
    }
    if ((long)(uVar17 + 0x40 >> 6) <= lVar7) break;
    ppplVar15 = pppplVar19[lVar7];
  }
  ppplVar18 = (long ***)0x0;
LAB_1002e29b8:
  FUN_10003f638(param_1,pppplVar19,uVar17,lVar13,ppplVar18);
  puVar9 = &DAT_1009af220;
  _swift_allocObject(&DAT_1009af220,0x20,7);
  uVar2 = uStack_100;
  uVar8 = local_108;
  *(undefined8 *)(puVar9 + 0x10) = local_108;
  *(undefined8 *)(puVar9 + 0x18) = uStack_100;
  local_a0 = FUN_1001fa32c;
  local_c0 = (long ***)PTR___NSConcreteStackBlock_100995490;
  local_b8 = 0x42000000;
  local_b0 = FUN_1000acdb4;
  puStack_a8 = &DAT_1009af238;
  local_98 = puVar9;
  aBlock = __Block_copy(&local_c0);
  FUN_10004090c(uVar8,uVar2);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar6);
  local_c8 = (long ***)PTR___swiftEmptyArrayStorage_100995ea0;
  puVar11 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar9 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar12 = &DAT_100a82c20;
  FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
  lVar7 = local_d0;
  puVar3 = local_e8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_e8,&local_c8,puVar9,puVar12,local_d0,puVar11);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar6,puVar3,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_e0 + 8))(puVar3,lVar7);
  (**(code **)(local_f8 + 8))(lVar6,lStack_f0);
  _swift_release(local_98);
  return;
}

