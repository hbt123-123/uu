// rea decompile_all
// name: FUN_10064831c
// address: 0x10064831c
// body: available
// range: 0x10064831c-0x100648433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064831c(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  char local_40;
  
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    lVar7 = param_2[1];
    lVar6 = *param_2;
    lVar1 = param_2[2];
    lVar4 = param_2[3];
    _swift_bridgeObjectRetain();
    uVar3 = 1;
    FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100648434);
      (*pcVar2)();
    }
    uVar5 = 0;
    local_40 = (char)lVar1;
    goto LAB_10064840c;
  }
  lVar7 = param_2[1];
  lVar6 = *param_2;
  lVar1 = param_2[2];
  lVar4 = param_2[3];
  _swift_bridgeObjectRetain();
  uVar5 = 1;
  FUN_100642874(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
  local_40 = (char)lVar1;
  if (local_40 == '\0') {
    if (lVar6 != 0 || lVar7 != 0) {
      local_40 = '\0';
      uVar5 = 1;
      goto LAB_10064840c;
    }
  }
  else {
    if (local_40 == '\x01') goto LAB_10064840c;
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar5 = 1;
      local_40 = '\x02';
      goto LAB_10064840c;
    }
  }
  uVar5 = 0;
LAB_10064840c:
  param_1[1] = lVar7;
  *param_1 = lVar6;
  *(char *)(param_1 + 2) = local_40;
  param_1[3] = lVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}

