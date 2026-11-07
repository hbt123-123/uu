// rea decompile_all
// name: FUN_10031e4fc
// address: 0x10031e4fc
// body: available
// range: 0x10031e4fc-0x10031e5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031e4fc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar6 = *(long *)(lVar1 + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a86050;
  FUN_100004bb4(&DAT_100a86050,&DAT_10081a808);
  lVar7 = *(long *)(puVar2 + -8);
  lVar5 = (long)puVar4 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(puVar4,param_1,lVar1);
  puVar3 = &DAT_100a85c30;
  FUN_100004bb4(&DAT_100a85c30,&DAT_10081a260);
  __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF(lVar5,puVar4,puVar3);
  (**(code **)(lVar7 + 8))(lVar5,puVar2);
  return;
}

