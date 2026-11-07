// rea decompile_all
// name: FUN_1003e29fc
// address: 0x1003e29fc
// body: available
// range: 0x1003e29fc-0x1003e2bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e29fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar9 = *unaff_x20;
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  _swift_getTupleTypeMetadata2(0,*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)(lVar9 + 0x58),0,0);
  lVar2 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar3);
  __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC();
  plVar7 = unaff_x20 + 2;
  *plVar7 = lVar2;
  FUN_100004b70(0);
  __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar5);
  (**(code **)(lVar8 + 0x68))
            (puVar4,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lVar1);
  lVar1 = -0x2fffffffffffffea;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000016,0x80000001008afe80,lVar5,lVar6,puVar4,0);
  unaff_x20[3] = lVar1;
  _swift_beginAccess(plVar7,auStack_78,1,0);
  lVar1 = *plVar7;
  *plVar7 = param_1;
  _swift_bridgeObjectRelease(lVar1);
  return;
}

