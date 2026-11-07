// rea decompile_all
// name: FUN_10065af18
// address: 0x10065af18
// body: available
// range: 0x10065af18-0x10065b19b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10065af18(long param_1,long param_2,char param_3,long param_4,undefined8 param_5,uint param_6)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long local_68;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_3 == '\0') {
    if (param_2 != 0) {
      uVar9 = 2;
      goto LAB_10065af90;
    }
    uVar9 = (ulong)(param_1 != 0);
  }
  else if (param_3 == '\x01') {
    uVar9 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10065b19c);
      (*pcVar2)();
    }
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10065af74);
      (*pcVar2)();
    }
  }
  else {
    uVar9 = *(ulong *)(param_4 + 0x10);
  }
  if (uVar9 == 0) {
    return PTR___swiftEmptyArrayStorage_100995ea0;
  }
LAB_10065af90:
  plVar3 = (long *)0x0;
  FUN_100664b48(0,uVar9,0);
  uVar8 = 0;
  uVar6 = (ulong)(param_1 != 0);
  if (param_2 != 0) {
    uVar6 = 2;
  }
  do {
    if (uVar9 == uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10065b180);
      (*pcVar2)();
    }
    if (param_3 == '\0') {
      local_68 = param_1;
      if ((uVar8 != 0) && (local_68 = param_2, uVar8 != 1)) goto LAB_10065b080;
    }
    else if (param_3 == '\x01') {
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10065b188);
        (*pcVar2)();
      }
      if ((long)uVar8 < param_2 - param_1) {
        uVar7 = param_1 + uVar8;
        if (SCARRY8(param_1,uVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10065b190);
          (*pcVar2)();
        }
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10065b194);
          (*pcVar2)();
        }
        if (*(ulong *)(param_4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10065b198);
          (*pcVar2)();
        }
        local_68 = *(long *)(param_4 + 0x20 + uVar7 * 8);
      }
      else {
LAB_10065b080:
        local_68 = 0;
      }
    }
    else {
      if (*(ulong *)(param_4 + 0x10) <= uVar8) goto LAB_10065b080;
      local_68 = *(long *)(param_4 + 0x20 + uVar8 * 8);
    }
    FUN_100659f38();
    plVar4 = &local_68;
    uVar5 = param_5;
    __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(plVar4,param_5,param_6 & 1,PTR___sSuN_100995a50,plVar3)
    ;
    uVar7 = *(ulong *)(puVar1 + 0x10);
    plVar3 = plVar4;
    if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar7) {
      plVar3 = (long *)(ulong)(1 < *(ulong *)(puVar1 + 0x18));
      FUN_100664b48(plVar3,uVar7 + 1,1);
    }
    *(ulong *)(puVar1 + 0x10) = uVar7 + 1;
    *(long **)(puVar1 + uVar7 * 0x10 + 0x20) = plVar4;
    *(undefined8 *)(puVar1 + uVar7 * 0x10 + 0x28) = uVar5;
    uVar7 = uVar6;
    if (param_3 != '\0') {
      if (param_3 == '\x01') {
        uVar7 = param_2 - param_1;
        if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10065b18c);
          (*pcVar2)();
        }
      }
      else {
        uVar7 = *(ulong *)(param_4 + 0x10);
      }
    }
    if ((long)uVar7 <= (long)uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10065b184);
      (*pcVar2)();
    }
    uVar8 = uVar8 + 1;
    if (uVar9 == uVar8) {
      return puVar1;
    }
  } while( true );
}

