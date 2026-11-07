// rea decompile_all
// name: FUN_10064a408
// address: 0x10064a408
// body: available
// range: 0x10064a408-0x10064a4cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064a408(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR___sSlTL_1009959e8;
  uVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSlTL_1009959e8,PTR___s5IndexSlTl_1009956e8);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar3,puVar1,PTR___sSl5IndexSl_SLTn_1009959e0);
  uVar4 = param_2;
  __sSL2leoiySbx_xtFZTj(param_2,param_1,uVar3,param_4);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10064a4cc);
    (*pcVar2)();
  }
  lVar5 = 0;
  __sSnMa(0,uVar3,param_4);
  uVar4 = param_1 + *(int *)(lVar5 + 0x24);
  __sSL2leoiySbx_xtFZTj(uVar4,param_2 + (long)*(int *)(lVar5 + 0x24),uVar3,param_4);
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10064a4d0);
  (*pcVar2)();
}

