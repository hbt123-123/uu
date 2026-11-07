// rea decompile_all
// name: FUN_10069c084
// address: 0x10069c084
// body: available
// range: 0x10069c084-0x10069c17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10069c084(char *param_1,char *param_2)

{
  char ******ppppppcVar1;
  long lVar2;
  char *pcVar3;
  char *****local_48 [2];
  char local_31;
  
  if (*param_2 == '\0') {
    return param_1;
  }
  lVar2 = (long)param_1[0x17];
  if (lVar2 < 0) {
    if (param_2 < *(char **)param_1) goto LAB_10069c14c;
    lVar2 = *(long *)(param_1 + 8);
    pcVar3 = *(char **)param_1;
  }
  else {
    pcVar3 = param_1;
    if (param_2 < param_1) goto LAB_10069c14c;
  }
  if (param_2 < pcVar3 + lVar2) {
    FUN_1006928dc(local_48,param_2);
    ppppppcVar1 = (char ******)local_48[0];
    if (-1 < local_31) {
      ppppppcVar1 = local_48;
    }
    if (*(char *)ppppppcVar1 != '/') {
      FUN_10069c028(param_1);
    }
    ppppppcVar1 = (char ******)local_48[0];
    if (-1 < local_31) {
      ppppppcVar1 = local_48;
    }
    std::string::append(param_1,(ulong)ppppppcVar1);
    if (-1 < local_31) {
      return param_1;
    }
    operator_delete(local_48[0]);
    return param_1;
  }
LAB_10069c14c:
  if (*param_2 != '/') {
    FUN_10069c028(param_1);
  }
  std::string::append(param_1);
  return param_1;
}

