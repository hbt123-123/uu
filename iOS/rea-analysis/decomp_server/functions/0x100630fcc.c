// rea decompile_all
// name: FUN_100630fcc
// address: 0x100630fcc
// body: available
// range: 0x100630fcc-0x100631063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100630fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR___sSlTL_1009959e8;
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,PTR___sSlTL_1009959e8,PTR___s5IndexSlTl_1009956e8);
  _swift_getAssociatedConformanceWitness
            (param_6,param_4,uVar2,puVar1,PTR___sSl5IndexSl_SLTn_1009959e0);
  __sSQ2eeoiySbx_xtFZTj(param_1,param_2,uVar2,*(undefined8 *)(param_6 + 8));
  return (uint)param_1 & 1;
}

