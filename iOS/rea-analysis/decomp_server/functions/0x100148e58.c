// rea decompile_all
// name: FUN_100148e58
// address: 0x100148e58
// body: available
// range: 0x100148e58-0x10014932b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100149324 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100148e58(ulong *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *aBlock;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_160 [16];
  ulong auStack_150 [2];
  ulong local_140;
  ulong *local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  ulong local_f8;
  char *local_f0;
  char *pcStack_e8;
  undefined *local_e0 [7];
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_110 = *(long *)(lVar4 + -8);
  local_108 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  lVar12 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_118 = lVar12;
  __s8Dispatch0A3QoSVMa();
  local_128 = *(long *)(lVar4 + -8);
  local_120 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_128 + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar12;
  uVar5 = _objc_msgSend(*(ID *)(unaff_x20 + 0x18),"operations");
  uVar6 = 0;
  FUN_100148e14(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar5,uVar6);
  if (uVar5 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar5 & 0xffffffffffffff8;
    if ((long)uVar5 < 0) {
      uVar13 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar13 != 0) {
    if (0 < (long)uVar13) {
      uVar14 = 0;
      uVar15 = uVar5 & 0xc000000000000001;
      local_f0 = s_____100892220 + 0x20;
      pcStack_e8 = "t";
      local_140 = uVar15;
      local_138 = param_1;
      do {
        if (uVar15 == 0) {
          uVar7 = *(ulong *)(uVar5 + uVar14 * 8 + 0x20);
        }
        else {
          uVar7 = uVar14;
          FUN_10016a1d0(uVar14,uVar5);
        }
        uVar6 = 0;
        FUN_100139194(0);
        _swift_dynamicCastClass(uVar7,uVar6);
        if (uVar7 != 0) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(ulong *)(lVar12 + -0x10) = uVar7;
          *(ulong **)(lVar12 + -8) = param_1;
          FUN_1003fb45c(FUN_1001496dc,lVar12 + -0x20,0xd0000000000000b1,
                        (ulong)pcStack_e8 | 0x8000000000000000,0xd00000000000001c,
                        (ulong)local_f0 | 0x8000000000000000,0x69,0);
          uVar11 = ((ulong *)(uVar7 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockKey)
                   )[1];
          if ((uVar11 == 0) ||
             ((uVar8 = *param_1,
              uVar8 != *(ulong *)(uVar7 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::
                                          blockKey) || uVar11 != param_1[1] &&
              (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), (uVar8 & 1) == 0)))) {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(ulong *)(lVar12 + -0x10) = uVar7;
            *(ulong **)(lVar12 + -8) = param_1;
            FUN_1003fb45c(FUN_1001496e4,lVar12 + -0x20,0xd0000000000000b1,
                          (ulong)pcStack_e8 | 0x8000000000000000,0xd00000000000001c,
                          (ulong)local_f0 | 0x8000000000000000,0x6c,0);
          }
          else {
            FUN_100135edc();
            puVar9 = &DAT_10099ebc8;
            local_f8 = uVar8;
            _swift_allocObject(&DAT_10099ebc8,0x18,7);
            _swift_unknownObjectWeakInit(puVar9 + 0x10,uVar7);
            puVar10 = &DAT_10099ebf0;
            _swift_allocObject(&DAT_10099ebf0,0x50,7);
            uVar15 = *param_1;
            uVar11 = param_1[3];
            uVar7 = param_1[2];
            *(ulong *)(puVar10 + 0x20) = param_1[1];
            *(ulong *)(puVar10 + 0x18) = uVar15;
            *(undefined **)(puVar10 + 0x10) = puVar9;
            *(ulong *)(puVar10 + 0x30) = uVar11;
            *(ulong *)(puVar10 + 0x28) = uVar7;
            uVar15 = param_1[4];
            *(ulong *)(puVar10 + 0x40) = param_1[5];
            *(ulong *)(puVar10 + 0x38) = uVar15;
            *(ulong *)(puVar10 + 0x48) = param_1[6];
            local_88 = FUN_10014974c;
            local_a8 = PTR___NSConcreteStackBlock_100995490;
            local_a0 = 0x42000000;
            local_98 = FUN_1000acdb4;
            puStack_90 = &DAT_10099ec08;
            local_100 = puVar9;
            local_80 = puVar10;
            aBlock = __Block_copy(&local_a8);
            _swift_retain(puVar9);
            FUN_100139d10(param_1,local_e0);
            lVar4 = local_130;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_130);
            local_e0[0] = PTR___swiftEmptyArrayStorage_100995ea0;
            FUN_10003f7fc();
            puVar9 = &DAT_100a75a98;
            FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
            puVar10 = puVar9;
            FUN_10004eec4();
            lVar2 = local_108;
            lVar1 = local_118;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_118,local_e0,puVar9,puVar10,local_108,param_1);
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar4,lVar1,aBlock);
            __Block_release(aBlock);
            uVar15 = local_140;
            (**(code **)(local_110 + 8))(lVar1,lVar2);
            param_1 = local_138;
            (**(code **)(local_128 + 8))(lVar4,local_120);
            puVar9 = local_80;
            _swift_release(local_100);
            _swift_release(puVar9);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar13 != uVar14);
      _swift_bridgeObjectRelease(uVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10014932c);
    (*pcVar3)();
  }
  _swift_bridgeObjectRelease(uVar5);
  return;
}

