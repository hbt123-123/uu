// rea decompile_all
// name: FUN_10061047c
// address: 0x10061047c
// body: available
// range: 0x10061047c-0x1006105c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061047c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar7 = *(long *)(lVar1 + -8);
  puVar5 = &stack0xffffffffffffffb0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar6 = (long)puVar5 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar2 = lVar6 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ab0490;
  FUN_100004bb4(&DAT_100ab0490,&DAT_100848878);
  _swift_allocObject();
  *(undefined **)(puVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  FUN_100605bac(0);
  __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar2);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar6);
  (**(code **)(lVar7 + 0x68))
            (puVar5,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lVar1);
  uVar4 = 0xd000000000000016;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000016,0x80000001008bec90,lVar6,lVar2,puVar5,0);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  return;
}

