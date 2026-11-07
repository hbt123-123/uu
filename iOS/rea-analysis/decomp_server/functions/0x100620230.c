// rea decompile_all
// name: FUN_100620230
// address: 0x100620230
// body: available
// range: 0x100620230-0x100620313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100620230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  puVar5 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100617228(puVar5,param_3,param_4);
  lVar3 = *(long *)(lVar2 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar3 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar4 != 1) {
    (**(code **)(lVar3 + 0x20))(param_1,puVar5,lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100620314);
  (*pcVar1)();
}

