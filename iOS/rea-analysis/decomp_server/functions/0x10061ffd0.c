// rea decompile_all
// name: FUN_10061ffd0
// address: 0x10061ffd0
// body: available
// range: 0x10061ffd0-0x10062008b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061ffd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = auStack_80 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(puVar2);
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = param_5 + 0x10;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (puVar2,FUN_1006278a8,auStack_80,PTR___sytN_100995e90 + 8);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}

