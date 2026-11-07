// rea decompile_all
// name: FUN_10056a264
// address: 0x10056a264
// body: available
// range: 0x10056a264-0x10056a3c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10056a264(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *local_158 [3];
  undefined *local_140;
  undefined8 *local_138;
  undefined8 local_e0;
  undefined8 uStack_d8;
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
  undefined8 local_70;
  undefined *local_68;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar4 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100511628(0,lVar4,0);
    puVar6 = (undefined8 *)(param_1 + 0x20);
    puVar5 = local_68;
    do {
      uStack_98 = puVar6[9];
      uStack_a0 = puVar6[8];
      uStack_88 = puVar6[0xb];
      local_90 = puVar6[10];
      uStack_78 = puVar6[0xd];
      uStack_80 = puVar6[0xc];
      uStack_d8 = puVar6[1];
      local_e0 = *puVar6;
      uStack_c8 = puVar6[3];
      local_d0 = puVar6[2];
      uStack_b8 = puVar6[5];
      uStack_c0 = puVar6[4];
      uStack_a8 = puVar6[7];
      local_b0 = puVar6[6];
      local_70 = puVar6[0xe];
      puVar3 = &local_e0;
      FUN_1005b2964(puVar3,local_158);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined8 *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_100511628(puVar3,uVar1 + 1,1);
      }
      puVar5 = local_68;
      local_140 = &DAT_1009d5800;
      FUN_1005a86d4();
      puVar2 = &DAT_1009d6278;
      local_138 = puVar3;
      _swift_allocObject(&DAT_1009d6278,0x88,7);
      *(undefined8 *)(puVar2 + 0x58) = uStack_98;
      *(undefined8 *)(puVar2 + 0x50) = uStack_a0;
      *(undefined8 *)(puVar2 + 0x68) = uStack_88;
      *(undefined8 *)(puVar2 + 0x60) = local_90;
      *(undefined8 *)(puVar2 + 0x78) = uStack_78;
      *(undefined8 *)(puVar2 + 0x70) = uStack_80;
      *(undefined8 *)(puVar2 + 0x18) = uStack_d8;
      *(undefined8 *)(puVar2 + 0x10) = local_e0;
      *(undefined8 *)(puVar2 + 0x28) = uStack_c8;
      *(undefined8 *)(puVar2 + 0x20) = local_d0;
      *(undefined8 *)(puVar2 + 0x80) = local_70;
      *(undefined8 *)(puVar2 + 0x38) = uStack_b8;
      *(undefined8 *)(puVar2 + 0x30) = uStack_c0;
      *(undefined8 *)(puVar2 + 0x48) = uStack_a8;
      *(undefined8 *)(puVar2 + 0x40) = local_b0;
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      local_158[0] = puVar2;
      thunk_FUN_1000a0074(local_158,puVar5 + uVar1 * 0x28 + 0x20);
      puVar6 = puVar6 + 0xf;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar5;
}

