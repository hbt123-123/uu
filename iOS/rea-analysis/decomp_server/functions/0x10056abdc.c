// rea decompile_all
// name: FUN_10056abdc
// address: 0x10056abdc
// body: available
// range: 0x10056abdc-0x10056aceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10056abdc(long param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  undefined8 local_78;
  ulong local_70;
  undefined *local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar7 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100511628(0,lVar7,0);
    puVar9 = (ulong *)(param_1 + 0x30);
    puVar6 = local_68;
    do {
      uVar1 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      FUN_100008184(uVar1,uVar3);
      uVar2 = *(ulong *)(puVar6 + 0x10);
      uVar4 = *(ulong *)(puVar6 + 0x18);
      uVar5 = uVar8;
      local_68 = puVar6;
      _swift_retain();
      if (uVar4 >> 1 <= uVar2) {
        uVar5 = (ulong)(1 < uVar4);
        FUN_100511628(uVar5,uVar2 + 1,1);
        puVar6 = local_68;
      }
      local_78 = param_2;
      (*param_3)();
      *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
      local_90 = uVar1;
      uStack_88 = uVar3;
      local_80 = uVar8;
      local_70 = uVar5;
      thunk_FUN_1000a0074(&local_90,puVar6 + uVar2 * 0x28 + 0x20);
      puVar9 = puVar9 + 3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return puVar6;
}

