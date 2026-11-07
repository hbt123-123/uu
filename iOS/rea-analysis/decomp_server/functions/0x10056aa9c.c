// rea decompile_all
// name: FUN_10056aa9c
// address: 0x10056aa9c
// body: available
// range: 0x10056aa9c-0x10056abdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10056aa9c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *local_130 [3];
  undefined *local_118;
  undefined8 *local_110;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *local_68;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar4 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100511628(0,lVar4,0);
    puVar6 = (undefined8 *)(param_1 + 0x20);
    puVar5 = local_68;
    do {
      uStack_a8 = puVar6[5];
      local_b0 = puVar6[4];
      uStack_98 = puVar6[7];
      uStack_a0 = puVar6[6];
      uStack_88 = puVar6[9];
      local_90 = puVar6[8];
      uStack_78 = puVar6[0xb];
      uStack_80 = puVar6[10];
      uStack_c8 = puVar6[1];
      local_d0 = *puVar6;
      uStack_b8 = puVar6[3];
      uStack_c0 = puVar6[2];
      puVar3 = &local_d0;
      FUN_1005b2d74(puVar3,local_130);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined8 *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_100511628(puVar3,uVar1 + 1,1);
      }
      puVar5 = local_68;
      local_118 = &DAT_1009d4bd0;
      FUN_1005aaa6c();
      puVar2 = &DAT_1009d62a0;
      local_110 = puVar3;
      _swift_allocObject(&DAT_1009d62a0,0x70,7);
      *(undefined8 *)(puVar2 + 0x38) = uStack_a8;
      *(undefined8 *)(puVar2 + 0x30) = local_b0;
      *(undefined8 *)(puVar2 + 0x48) = uStack_98;
      *(undefined8 *)(puVar2 + 0x40) = uStack_a0;
      *(undefined8 *)(puVar2 + 0x58) = uStack_88;
      *(undefined8 *)(puVar2 + 0x50) = local_90;
      *(undefined8 *)(puVar2 + 0x68) = uStack_78;
      *(undefined8 *)(puVar2 + 0x60) = uStack_80;
      *(undefined8 *)(puVar2 + 0x18) = uStack_c8;
      *(undefined8 *)(puVar2 + 0x10) = local_d0;
      *(undefined8 *)(puVar2 + 0x28) = uStack_b8;
      *(undefined8 *)(puVar2 + 0x20) = uStack_c0;
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      local_130[0] = puVar2;
      thunk_FUN_1000a0074(local_130,puVar5 + uVar1 * 0x28 + 0x20);
      puVar6 = puVar6 + 0xc;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar5;
}

