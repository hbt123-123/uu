// rea decompile_all
// name: FUN_100387b24
// address: 0x100387b24
// body: available
// range: 0x100387b24-0x100387dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100387b24(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  char local_82;
  byte local_81;
  ulong local_80;
  ulong *puStack_78;
  undefined8 *local_68;
  
  if (*(char *)(param_1 + 0xd8) != '\x01') {
    return 0;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    lVar6 = *(long *)(param_1 + 0x68);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x70);
  }
  if (*(long *)(lVar6 + 0x18) == 0) {
    return 0;
  }
  local_68 = *(undefined8 **)(param_1 + 200);
  if ((local_68 != (undefined8 *)0x0) && (*(char *)((long)local_68 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_68,*(undefined4 *)(local_68 + 1));
  }
  uVar3 = 0;
  _time();
  FUN_100386734(1,"MMKV_IO.cpp","filterExpiredKeys",0x71a,
                "filtering expired keys inside [%s] now: %u, m_expiredInSeconds: %u");
  lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 0x20) + 4;
  if (*(long *)(param_1 + 0xb0) == 0) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x68) + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_100387d74;
    lVar7 = 0;
    do {
      while (*(int *)(lVar6 + (ulong)*(uint *)(plVar9 + 4) + (ulong)*(ushort *)(plVar9 + 3) +
                     (ulong)(*(int *)((long)plVar9 + 0x1c) - 4)) - 1U < uVar3) {
        plVar5 = *(long **)(param_1 + 0x68);
        FUN_10038e370(plVar5,plVar9);
        FUN_100386734(1,"MMKV_IO.cpp","filterExpiredKeys",0x742,
                      "deleting expired key [%@], due date %u");
        lVar7 = lVar7 + 1;
        plVar9 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_100387d60;
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  else {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x10);
    if (puVar8 == (undefined8 *)0x0) {
LAB_100387d74:
      lVar7 = 0;
      goto LAB_100387dac;
    }
    lVar7 = 0;
    do {
      FUN_10037e5ac(&local_82,puVar8 + 3,lVar6,*(undefined8 *)(param_1 + 0xb0));
      uVar1 = (ulong)local_81;
      puVar2 = &local_80;
      if (local_82 != '\0') {
        uVar1 = local_80;
        puVar2 = puStack_78;
      }
      if (*(int *)((long)puVar2 + (uVar1 - 4)) - 1U < uVar3) {
        puVar4 = *(undefined8 **)(param_1 + 0x70);
        FUN_10038e318(puVar4,puVar8);
        FUN_100386734(1,"MMKV_IO.cpp","filterExpiredKeys",0x72b,
                      "deleting expired key [%@], due date %u");
        lVar7 = lVar7 + 1;
      }
      else {
        puVar4 = (undefined8 *)*puVar8;
      }
      thunk_FUN_10037edac(&local_82);
      puVar8 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
LAB_100387d60:
  if (lVar7 != 0) {
    FUN_100386734(1,"MMKV_IO.cpp","filterExpiredKeys",0x74e,"deleted %zu expired keys inside [%s]");
  }
LAB_100387dac:
  FUN_100385fb0(&local_68);
  return lVar7;
}

