// rea decompile_all
// name: FUN_100651510
// address: 0x100651510
// body: available
// range: 0x100651510-0x1006516a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100651510(undefined8 param_1,long param_2,long param_3,char param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = 0;
  uVar2 = param_3 - param_2;
  uVar5 = (ulong)(param_2 != 0);
  if (param_3 != 0) {
    uVar5 = 2;
  }
  if (param_4 == '\0') goto LAB_100651588;
  do {
    if (param_4 == '\x01') {
      uVar6 = uVar2;
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100651694);
        (*pcVar3)();
      }
    }
    else {
      uVar6 = *(ulong *)(param_5 + 0x10);
    }
    if (uVar7 == uVar6) {
      return;
    }
    if (param_4 == '\x02') {
      uVar6 = *(ulong *)(param_5 + 0x10);
      if (uVar7 < uVar6) {
        lVar4 = *(long *)(param_5 + 0x20 + uVar7 * 8);
      }
      else {
        lVar4 = 0;
      }
    }
    else {
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100651698);
        (*pcVar3)();
      }
      uVar6 = uVar2;
      if ((long)uVar7 < (long)uVar2) {
        uVar1 = param_2 + uVar7;
        if (SCARRY8(param_2,uVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065169c);
          (*pcVar3)();
        }
        if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006516a0);
          (*pcVar3)();
        }
        if (*(ulong *)(param_5 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006516a4);
          (*pcVar3)();
        }
        lVar4 = *(long *)(param_5 + 0x20 + uVar1 * 8);
      }
      else {
        lVar4 = 0;
      }
    }
    while( true ) {
      if ((long)uVar6 <= (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100651690);
        (*pcVar3)();
      }
      uVar7 = uVar7 + 1;
      __ss6HasherV8_combineyySuF(lVar4);
      if (param_4 != '\0') break;
LAB_100651588:
      lVar4 = param_2;
      uVar6 = uVar5;
      if (param_3 == 0) {
        if (param_2 == 0) {
          if ((uVar7 != 1) && (uVar7 == 0)) {
            return;
          }
          goto LAB_10065164c;
        }
        if (uVar7 != 0) {
          if (uVar7 == 1) {
            return;
          }
LAB_10065164c:
          lVar4 = 0;
        }
      }
      else if ((uVar7 != 0) && (lVar4 = param_3, uVar7 != 1)) {
        if (uVar7 == 2) {
          return;
        }
        goto LAB_10065164c;
      }
    }
  } while( true );
}

