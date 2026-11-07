// rea decompile_all
// name: FUN_1002c1ba4
// address: 0x1002c1ba4
// body: available
// range: 0x1002c1ba4-0x1002c1cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002c1ba4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_68 [5];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  __s10Foundation12NotificationV8userInfoSDys11AnyHashableVypGSgvg();
  if (param_1 == 0) {
    uStack_38 = 0;
    local_40 = 0;
    local_28 = 0;
    uStack_30 = 0;
    goto LAB_1002c1c9c;
  }
  local_40 = 0xd000000000000026;
  uStack_38 = 0x80000001008a9970;
  puVar3 = PTR___sSSN_1009957f8;
  __ss11AnyHashableVyABxcSHRzlufC(local_68,&local_40,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_1002c1c44:
    uStack_38 = 0;
    local_40 = 0;
    local_28 = 0;
    uStack_30 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar1 = local_68;
    FUN_100280228(puVar1);
    if (((ulong)puVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_1002c1c44;
    }
    FUN_10003e8bc(*(long *)(param_1 + 0x38) + (long)puVar1 * 0x20,&local_40);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_bridgeObjectRelease(param_1);
  FUN_100280720(local_68);
  if (local_28 != 0) {
    uVar2 = 0;
    FUN_1002d4054(0);
    puVar1 = local_68;
    _swift_dynamicCast(puVar1,&local_40,PTR___sypN_100995e88 + 8,uVar2,6);
    if ((int)puVar1 != 0) {
      return local_68[0];
    }
    return 0;
  }
LAB_1002c1c9c:
  FUN_100040bb4(&local_40,&DAT_100a82480,&DAT_1008182d0);
  return 0;
}

