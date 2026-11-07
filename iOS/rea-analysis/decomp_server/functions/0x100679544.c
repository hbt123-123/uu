// rea decompile_all
// name: FUN_100679544
// address: 0x100679544
// body: available
// range: 0x100679544-0x1006795f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100679544(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_2 + 0x10);
  pcVar4 = *(code **)(param_4 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(param_2);
  lVar1 = param_1;
  (*pcVar4)(param_1,param_1 + 0x20,0,lVar2 << 1 | 1,param_2,param_2 + 0x20,0,lVar3 << 1 | 1,param_3,
            param_4);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(param_2);
  return (uint)lVar1 & 1;
}

