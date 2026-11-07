// rea decompile_all
// name: FUN_1000f2dd0
// address: 0x1000f2dd0
// body: available
// range: 0x1000f2dd0-0x1000f324b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f2dd0(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  void *pvVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auStack_f0 [8];
  code *local_e8;
  undefined4 local_dc;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_78;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  puVar11 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(int *)(unaff_x20 + 0xf8) < 0) {
    local_78 = 0xffffffffffffffff;
    iVar2 = _pipe((int)&stack0xfffffffffffffff0 + -0x68);
    if (iVar2 == 0) {
      iVar2 = (int)local_78;
      __s6Darwin5fcntlys5Int32VAD_A2DtF(local_78 & 0xffffffff,2,1);
      if (iVar2 == 0) {
        iVar2 = (int)(local_78 >> 0x20);
        __s6Darwin5fcntlys5Int32VAD_A2DtF(local_78 >> 0x20,2,1);
        if (iVar2 == 0) {
          iVar2 = (int)(local_78 >> 0x20);
          __s6Darwin5fcntlys5Int32VAD_A2DtF(local_78 >> 0x20,4,4);
          if (iVar2 == 0) {
            uVar1 = (undefined4)local_78;
            uVar6 = local_78 & 0xffffffff;
            *(undefined4 *)(unaff_x20 + 0xf8) = (undefined4)local_78;
            DAT_100a78268 = local_78._4_4_;
            uVar5 = 0;
            FUN_10004003c(0,&DAT_100a78708,&PTR__OBJC_CLASS___OS_dispatch_source_100a658f0);
            local_dc = uVar1;
            __sSo18OS_dispatch_sourceC8DispatchE14makeReadSource14fileDescriptor5queueSo0a1_b1_C5_read_ps5Int32V_So0a1_b1_J0CSgtFZ
                      (uVar6,*(undefined8 *)(unaff_x20 + 0x100),uVar5);
            uVar7 = uVar6;
            _swift_getObjectType();
            puVar8 = &DAT_10099c558;
            _swift_allocObject(&DAT_10099c558,0x18,7);
            _swift_weakInit(puVar8 + 0x10);
            puVar9 = &DAT_10099c5a8;
            _swift_allocObject(&DAT_10099c5a8,0x20,7);
            *(undefined4 *)(puVar9 + 0x10) = uVar1;
            *(undefined **)(puVar9 + 0x18) = puVar8;
            local_a8 = FUN_1000f447c;
            local_c8 = PTR___NSConcreteStackBlock_100995490;
            local_c0 = 0x42000000;
            local_b8 = FUN_1000acdb4;
            puStack_b0 = &DAT_10099c5c0;
            local_a0 = puVar9;
            pvVar10 = __Block_copy(&local_c8);
            _swift_retain(puVar8);
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12,uVar7);
            thunk_FUN_1001e7cc4(puVar11,uVar7);
            __sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
                      (lVar12,puVar11,pvVar10,uVar7);
            __Block_release(pvVar10);
            local_e8 = *(code **)(lVar15 + 8);
            (*local_e8)(puVar11,lVar3);
            pcVar14 = *(code **)(lVar13 + 8);
            (*pcVar14)(lVar12,lVar4);
            puVar9 = local_a0;
            _swift_release(puVar8);
            _swift_release(puVar9);
            puVar8 = &DAT_10099c5f8;
            _swift_allocObject(&DAT_10099c5f8,0x14,7);
            *(undefined4 *)(puVar8 + 0x10) = local_dc;
            local_a8 = FUN_1000f4498;
            local_c8 = PTR___NSConcreteStackBlock_100995490;
            local_c0 = 0x42000000;
            local_b8 = FUN_1000acdb4;
            puStack_b0 = &DAT_10099c610;
            local_a0 = puVar8;
            pvVar10 = __Block_copy(&local_c8);
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12,uVar7);
            thunk_FUN_1001e7cc4(puVar11,uVar7);
            __sSo18OS_dispatch_sourceP8DispatchE16setCancelHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
                      (lVar12,puVar11,pvVar10,uVar7);
            __Block_release(pvVar10);
            (*local_e8)(puVar11,lVar3);
            (*pcVar14)(lVar12,lVar4);
            _swift_release(local_a0);
            __sSo18OS_dispatch_sourceP8DispatchE6resumeyyF(uVar7);
            uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
            *(ulong *)(unaff_x20 + 0xf0) = uVar6;
            _swift_unknownObjectRetain(uVar6);
            _swift_unknownObjectRelease(uVar5);
            _signal(0xf,FUN_1000f347c);
            _swift_unknownObjectRelease(uVar6);
            return;
          }
        }
      }
      FUN_100401b14(0);
      FUN_1003fb4ec(FUN_1000f3328,0,0xd000000000000084,0x8000000100888f20,&DAT_d000000000000018,
                    0x8000000100889020,0x116,0);
      _close(local_78 & 0xffffffff);
      _close(local_78._4_4_);
    }
    else {
      FUN_100401b14(0);
      FUN_1003fb4ec(FUN_1000f3278,0,0xd000000000000084,0x8000000100888f20,&DAT_d000000000000018,
                    0x8000000100889020,0x110,0);
    }
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb4bc(FUN_1000f324c,0,0xd000000000000084,0x8000000100888f20,&DAT_d000000000000018,
                  0x8000000100889020,0x10b,0);
  }
  return;
}

