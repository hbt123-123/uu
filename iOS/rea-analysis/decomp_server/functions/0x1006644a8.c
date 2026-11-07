// rea decompile_all
// name: FUN_1006644a8
// address: 0x1006644a8
// body: available
// range: 0x1006644a8-0x10066456b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006644a8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  ulong local_70;
  undefined8 uStack_68;
  long local_40;
  long local_38;
  
  uVar3 = param_1;
  __sSl7isEmptySbvgTj();
  if ((uVar3 & 1) == 0) {
    __sSl10startIndex0B0QzvgTj(&local_38,param_1,param_2);
    __sSl8endIndex0B0QzvgTj(&local_40,param_1,param_2);
    uVar3 = local_40 - local_38;
    if (SBORROW8(local_40,local_38)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066456c);
      (*pcVar2)();
    }
    uVar1 = uVar3 + 3;
    if (-1 < (long)uVar3) {
      uVar1 = uVar3;
    }
    lVar4 = (long)uVar1 >> 2;
    if (0 < (long)(uVar3 & 0x8000000000000003)) {
      lVar4 = lVar4 + 1;
    }
    local_70 = param_1;
    uStack_68 = param_2;
    FUN_1006648ec(lVar4,FUN_1006646d4,auStack_80,PTR___ss6UInt32VN_100995dc0);
  }
  return;
}

