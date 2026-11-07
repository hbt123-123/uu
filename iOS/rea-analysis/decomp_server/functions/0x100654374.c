// rea decompile_all
// name: FUN_100654374
// address: 0x100654374
// body: available
// range: 0x100654374-0x10065441b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100654374(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_4 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100654418);
    (*pcVar1)();
  }
  uVar6 = LZCOUNT(param_4);
  lVar4 = param_4 << (uVar6 & 0x3f);
  if (uVar6 != 0) {
    param_2 = param_3 >> ((ulong)(uint)-(int)uVar6 & 0x3f) | param_2 << (uVar6 & 0x3f);
  }
  param_3 = param_3 << (uVar6 & 0x3f);
  uVar2 = param_2;
  FUN_10065441c(param_2,param_3 >> 0x20,lVar4);
  uVar5 = (param_3 >> 0x20 | param_2 << 0x20) - uVar2 * lVar4;
  uVar3 = uVar5;
  FUN_10065441c(uVar5,param_3 & 0xffffffff,lVar4);
  *param_1 = ((param_3 & 0xffffffff) - uVar3 * lVar4) + (uVar5 << 0x20) >> (uVar6 & 0x3f);
  if (!CARRY8(uVar3,uVar2 << 0x20)) {
    return uVar3 + (uVar2 << 0x20);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065441c);
  (*pcVar1)();
}

