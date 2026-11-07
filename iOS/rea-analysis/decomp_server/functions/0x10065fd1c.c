// rea decompile_all
// name: FUN_10065fd1c
// address: 0x10065fd1c
// body: available
// range: 0x10065fd1c-0x10065fe43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10065fd1c(long param_1,long param_2,long param_3,long param_4,long param_5,char param_6,
             long param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (param_6 == '\0') {
    uVar2 = (ulong)(param_4 != 0);
    if (param_5 != 0) {
      uVar2 = 2;
    }
  }
  else if (param_6 == '\x01') {
    uVar2 = param_5 - param_4;
    if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fd38);
      (*pcVar1)();
    }
  }
  else {
    uVar2 = *(ulong *)(param_7 + 0x10);
  }
  if ((param_1 < 0) || ((long)uVar2 < param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fe3c);
    (*pcVar1)();
  }
  if (param_6 == '\0') {
    uVar2 = (ulong)(param_4 != 0);
    if (param_5 != 0) {
      uVar2 = 2;
    }
  }
  else if (param_6 == '\x01') {
    uVar2 = param_5 - param_4;
    if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fd7c);
      (*pcVar1)();
    }
  }
  else {
    uVar2 = *(ulong *)(param_7 + 0x10);
  }
  if ((param_3 < 0) || ((long)uVar2 < param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fe40);
    (*pcVar1)();
  }
  param_3 = param_3 - param_1;
  if (param_2 < 1) {
    if ((param_3 < 1) && (param_2 < param_3)) goto LAB_10065fdd0;
  }
  else if ((-1 < param_3) && (param_3 < param_2)) {
LAB_10065fdd0:
    return ZEXT816(1) << 0x40;
  }
  uVar2 = param_1 + param_2;
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fe44);
    (*pcVar1)();
  }
  if (param_6 == '\0') {
    if (param_5 == 0) {
      uVar3 = (ulong)(param_4 != 0);
    }
    else {
      uVar3 = 2;
    }
  }
  else if (param_6 == '\x01') {
    uVar3 = param_5 - param_4;
    if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fe00);
      (*pcVar1)();
    }
  }
  else {
    uVar3 = *(ulong *)(param_7 + 0x10);
  }
  if ((-1 < (long)uVar2) && ((long)uVar2 <= (long)uVar3)) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar2;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fe38);
  (*pcVar1)();
}

