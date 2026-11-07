// rea decompile_all
// name: FUN_100631064
// address: 0x100631064
// body: available
// range: 0x100631064-0x100631103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100631064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR___sSlTL_1009959e8;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,PTR___sSlTL_1009959e8,PTR___s5IndexSlTl_1009956e8);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar2,puVar1,PTR___sSl5IndexSl_SLTn_1009959e0);
  lVar3 = 0;
  __sSnMa(0,uVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x000100631100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  return;
}

