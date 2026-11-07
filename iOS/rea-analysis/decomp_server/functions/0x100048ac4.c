// rea decompile_all
// name: FUN_100048ac4
// address: 0x100048ac4
// body: available
// range: 0x100048ac4-0x100048d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100048ac4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x58;
  lVar2 = ((long)param_3 - (long)param_2) / 0x58;
  if (lVar1 < lVar2) {
    if ((param_4 != param_1) || (param_1 + lVar1 * 0xb <= param_4)) {
      _memmove(param_4,param_1,lVar1 * 0x58);
    }
    plVar7 = param_4 + lVar1 * 0xb;
    plVar3 = param_1;
    if (0x57 < (long)param_2 - (long)param_1) {
      do {
        plVar3 = param_1;
        if (param_3 <= param_2) break;
        if (*param_2 < *param_4) {
          plVar3 = param_4;
          plVar6 = param_2;
          param_2 = param_2 + 0xb;
        }
        else {
          plVar3 = param_4 + 0xb;
          plVar6 = param_4;
        }
        param_4 = plVar3;
        if (param_1 != plVar6) {
          _memmove(param_1,plVar6,0x58);
        }
        param_1 = param_1 + 0xb;
        plVar3 = param_1;
      } while (param_4 < plVar7);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar2 * 0xb <= param_4)) {
      _memmove(param_4,param_2,lVar2 * 0x58);
    }
    plVar7 = param_4 + lVar2 * 0xb;
    plVar3 = param_2;
    plVar6 = plVar7;
    if (0x57 < (long)param_3 - (long)param_2) {
      while (plVar3 = param_2, plVar7 = plVar6, param_1 < param_2) {
        plVar5 = param_2 + -0xb;
        plVar4 = param_3;
        while( true ) {
          param_3 = plVar4 + -0xb;
          plVar7 = plVar6 + -0xb;
          if (*plVar7 < *plVar5) break;
          if (plVar4 != plVar6) {
            _memmove(param_3,plVar7,0x58);
          }
          plVar6 = plVar7;
          plVar4 = param_3;
          if (plVar7 <= param_4) goto LAB_100048ce8;
        }
        if (plVar4 != param_2) {
          _memmove(param_3,plVar5,0x58);
        }
        plVar3 = plVar5;
        plVar7 = plVar6;
        param_2 = plVar5;
        if (plVar6 <= param_4) break;
      }
    }
  }
LAB_100048ce8:
  lVar1 = ((long)plVar7 - (long)param_4) / 0x58;
  if ((plVar3 != param_4) || (param_4 + lVar1 * 0xb <= plVar3)) {
    _memmove(plVar3,param_4,lVar1 * 0x58);
  }
  return 1;
}

