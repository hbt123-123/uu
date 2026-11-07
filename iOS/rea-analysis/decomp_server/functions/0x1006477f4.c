// rea decompile_all
// name: FUN_1006477f4
// address: 0x1006477f4
// body: available
// range: 0x1006477f4-0x100647a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1006477f4(ulong param_1,ulong param_2,char param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_3 == '\0') {
    if (param_2 != 0) {
      uVar6 = 2;
      goto LAB_100647850;
    }
    uVar6 = (ulong)(param_1 != 0);
  }
  else if (param_3 == '\x01') {
    uVar6 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100647a08);
      (*pcVar2)();
    }
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10064783c);
      (*pcVar2)();
    }
  }
  else {
    uVar6 = *(ulong *)(param_4 + 0x10);
  }
  if (uVar6 == 0) {
    return puVar1;
  }
LAB_100647850:
  FUN_100664b2c(0,uVar6,0);
  uVar7 = 0;
  uVar3 = (ulong)(param_1 != 0);
  if (param_2 != 0) {
    uVar3 = 2;
  }
  do {
    if (uVar6 == uVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006479ec);
      (*pcVar2)();
    }
    if (param_3 == '\0') {
      uVar4 = param_2;
      if (uVar7 != 1) {
        uVar4 = 0;
      }
      uVar5 = param_1;
      if (uVar7 != 0) {
        uVar5 = uVar4;
      }
    }
    else if (param_3 == '\x01') {
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006479f4);
        (*pcVar2)();
      }
      if ((long)uVar7 < (long)(param_2 - param_1)) {
        uVar4 = param_1 + uVar7;
        if (SCARRY8(param_1,uVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006479fc);
          (*pcVar2)();
        }
        if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100647a00);
          (*pcVar2)();
        }
        if (*(ulong *)(param_4 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100647a04);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_4 + 0x20 + uVar4 * 8);
      }
      else {
LAB_100647918:
        uVar5 = 0;
      }
    }
    else {
      if (*(ulong *)(param_4 + 0x10) <= uVar7) goto LAB_100647918;
      uVar5 = *(ulong *)(param_4 + 0x20 + uVar7 * 8);
    }
    uVar4 = *(ulong *)(puVar1 + 0x10);
    if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
      FUN_100664b2c(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
    }
    *(ulong *)(puVar1 + 0x10) = uVar4 + 1;
    *(ulong *)(puVar1 + uVar4 * 8 + 0x20) = ~uVar5;
    uVar4 = uVar3;
    if (param_3 != '\0') {
      if (param_3 == '\x01') {
        uVar4 = param_2 - param_1;
        if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006479f8);
          (*pcVar2)();
        }
      }
      else {
        uVar4 = *(ulong *)(param_4 + 0x10);
      }
    }
    if ((long)uVar4 <= (long)uVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006479f0);
      (*pcVar2)();
    }
    uVar7 = uVar7 + 1;
    if (uVar6 == uVar7) {
      return puVar1;
    }
  } while( true );
}

