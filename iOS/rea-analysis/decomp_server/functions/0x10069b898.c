// rea decompile_all
// name: FUN_10069b898
// address: 0x10069b898
// body: available
// range: 0x10069b898-0x10069b977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10069b898(long param_1)

{
  char *pcVar1;
  undefined8 *****pppppuVar2;
  long lVar3;
  undefined8 ****local_48 [2];
  char local_31;
  
  lVar3 = (long)*(char *)(param_1 + 0x37);
  if (lVar3 < 0) {
    lVar3 = *(long *)(param_1 + 0x28);
  }
  pcVar1 = (char *)(param_1 + 0x20);
  if (lVar3 == 0) {
    std::runtime_error::what();
    std::string::assign(pcVar1);
    lVar3 = (long)*(char *)(param_1 + 0x37);
    if (lVar3 < 0) {
      lVar3 = *(long *)(param_1 + 0x28);
    }
    if (lVar3 != 0) {
      std::string::append(pcVar1);
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (local_48,*(long **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10));
    pppppuVar2 = (undefined8 *****)local_48[0];
    if (-1 < local_31) {
      pppppuVar2 = local_48;
    }
    std::string::append(pcVar1,(ulong)pppppuVar2);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    if (-1 < *(char *)(param_1 + 0x37)) {
      return pcVar1;
    }
  }
  else if (((uint)(int)*(char *)(param_1 + 0x37) >> 7 & 1) == 0) {
    return pcVar1;
  }
  return *(char **)pcVar1;
}

