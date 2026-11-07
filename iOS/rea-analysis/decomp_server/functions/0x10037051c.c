// rea decompile_all
// name: FUN_10037051c
// address: 0x10037051c
// body: available
// range: 0x10037051c-0x100370887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10037051c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ID IVar8;
  long unaff_x20;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = param_1;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_a8 = *(long *)(lVar1 + -8);
  lVar13 = (long)&local_c0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_b0 = lVar13;
  local_a0 = lVar1;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar13 = lVar13 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = lVar13 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar11 = *(long *)(lVar1 + -8);
  lVar9 = lVar14 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = _TtC10Filepicker17FilepickerManager::queue;
  uVar3 = 0;
  FUN_100361acc();
  local_c0 = uVar3;
  __s10Foundation4UUIDVACycfC(lVar9);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar11 + 8))(lVar9,lVar1);
  local_70 = (undefined *)0xd00000000000001f;
  uStack_68 = 0x80000001008abc40;
  __sSS6appendyySSF(uVar3,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = uStack_68;
  puVar7 = local_70;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a88740;
  FUN_100005c90(&DAT_100a88740,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar5 = &DAT_100a88748;
  FUN_100004bb4(&DAT_100a88748,&DAT_10081c5f0);
  puVar6 = &DAT_100a88750;
  FUN_1000d61d8(&DAT_100a88750,&DAT_100a88748,&DAT_10081c5f0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar13,&local_70,puVar5,puVar6,lVar2,puVar4);
  lVar1 = local_b0;
  (**(code **)(local_a8 + 0x68))
            (local_b0,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,local_a0);
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (puVar7,uVar3,lVar14,lVar13,lVar1,0);
  *(undefined **)(unaff_x20 + local_b8) = puVar7;
  *(undefined1 *)(unaff_x20 + _TtC10Filepicker17FilepickerManager::startRequestsImmediately) = 0;
  puVar6 = (undefined8 *)
           (unaff_x20 + _TtC10Filepicker17FilepickerManager::backgroundCompletionHandler);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilepickerManager::sessionDelegate) = local_98;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilepickerManager::filePickerConfig) = uStack_90;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilepickerManager::session) = local_88;
  FUN_100372bc8();
  IVar8 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"init");
  lVar1 = _TtC10Filepicker17FilepickerManager::sessionDelegate;
  _swift_unknownObjectWeakAssign
            (*(long *)(IVar8 + _TtC10Filepicker17FilepickerManager::sessionDelegate) +
             _TtC10Filepicker25FilePickerSessionDelegate::sessionManager,IVar8);
  puVar10 = *(ulong **)(IVar8 + lVar1);
  puVar4 = &DAT_1009b5368;
  _swift_allocObject(&DAT_1009b5368,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,IVar8);
  pcVar12 = *(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *puVar10) + 0xb0);
  _swift_retain(puVar4);
  (*pcVar12)(FUN_100372c0c,puVar4);
  _swift_release(puVar4);
  return IVar8;
}

