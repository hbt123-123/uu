// rea decompile_all
// name: FUN_100608308
// address: 0x100608308
// body: available
// range: 0x100608308-0x100608467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100608308(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *unaff_x20;
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar9 = *(long *)(lVar1 + -8);
  puVar6 = &stack0xffffffffffffffa0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar7 = (long)puVar6 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar8 = lVar7 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(lVar5 + 0x78);
  lVar2 = *(long *)(lVar5 + 0x80);
  uVar3 = 0;
  FUN_1006076d4(0,uVar4);
  FUN_1006076e0();
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  uVar3 = 0;
  FUN_100608530(0,uVar4);
  _swift_storeEnumTagMultiPayload((long)unaff_x20 + lVar2,uVar3,0);
  lVar2 = *(long *)(*unaff_x20 + 0x88);
  FUN_100605bac(0);
  __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar8);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7);
  (**(code **)(lVar9 + 0x68))
            (puVar6,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lVar1);
  uVar4 = 0xd000000000000016;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000016,0x80000001008bec90,lVar7,lVar8,puVar6,0);
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar4;
  return;
}

