// rea decompile_all
// name: FUN_10012bbcc
// address: 0x10012bbcc
// body: available
// range: 0x10012bbcc-0x10012bed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012bcd0 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012bbcc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  void *aBlock;
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint local_d0;
  uint uStack_cc;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  void *local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  local_b0 = (void *)param_4;
  local_a8 = param_2;
  local_a0 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = unaff_x20 + 0x28;
  _swift_weakLoadStrong();
  if (lVar5 != 0) {
    lVar6 = param_1;
    local_b8 = lVar11;
    FUN_100133430();
    if (((lVar6 == 0) ||
        (lVar11 = *(long *)(lVar6 + 0x10), _swift_bridgeObjectRelease(), lVar11 == 0)) ||
       (lVar11 = param_1, FUN_100133770(), (param_2 & 1) != 0)) {
      _swift_release(lVar5);
      return;
    }
    uStack_cc = param_5 & 0xffff;
    local_d0 = param_5 & 0xff;
    lVar6 = lVar11;
    FUN_10012b9d0();
    puVar7 = &DAT_10099e5c8;
    local_c0 = lVar6;
    _swift_allocObject(&DAT_10099e5c8,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    puVar8 = &DAT_10099e5f0;
    _swift_allocObject(&DAT_10099e5f0,0x4a,7);
    uVar2 = local_a0;
    uVar1 = local_a8;
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long *)(puVar8 + 0x18) = lVar11;
    *(long *)(puVar8 + 0x20) = lVar5;
    *(int *)(puVar8 + 0x28) = (int)param_1;
    *(ulong *)(puVar8 + 0x30) = local_a8;
    *(undefined8 *)(puVar8 + 0x38) = local_a0;
    *(void **)(puVar8 + 0x40) = local_b0;
    puVar8[0x48] = (char)local_d0;
    puVar8[0x49] = (byte)(uStack_cc >> 8) & 1;
    local_70 = FUN_10012d13c;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_10099e608;
    local_c8 = puVar7;
    local_68 = puVar8;
    local_b0 = __Block_copy(&local_90);
    _swift_retain(puVar7);
    _swift_retain(lVar5);
    FUN_100008184(uVar1,uVar2);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar7 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar10 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar12,&local_98,puVar7,puVar10,lVar3,puVar9);
    aBlock = local_b0;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar13,lVar12,local_b0);
    __Block_release(aBlock);
    _swift_release(lVar5);
    (**(code **)(local_b8 + 8))(lVar12,lVar3);
    (**(code **)(lVar14 + 8))(lVar13,lVar4);
    puVar7 = local_68;
    _swift_release(local_c8);
    _swift_release(puVar7);
  }
  return;
}

