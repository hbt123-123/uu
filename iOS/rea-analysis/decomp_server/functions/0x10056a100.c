// rea decompile_all
// name: FUN_10056a100
// address: 0x10056a100
// body: available
// range: 0x10056a100-0x10056a263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10056a100(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *local_190 [3];
  undefined *local_178;
  undefined8 *local_170;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 local_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  undefined *local_68;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar4 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100511628(0,lVar4,0);
    puVar6 = (undefined8 *)(param_1 + 0x20);
    puVar5 = local_68;
    do {
      uStack_98 = puVar6[0xd];
      local_a0 = puVar6[0xc];
      uStack_90 = puVar6[0xe];
      uStack_88 = (undefined2)puVar6[0xf];
      uStack_7e = *(undefined8 *)((long)puVar6 + 0x82);
      local_86 = (undefined6)*(undefined8 *)((long)puVar6 + 0x7a);
      uStack_80 = (undefined2)((ulong)*(undefined8 *)((long)puVar6 + 0x7a) >> 0x30);
      uStack_d8 = puVar6[5];
      local_e0 = puVar6[4];
      uStack_c8 = puVar6[7];
      uStack_d0 = puVar6[6];
      uStack_b8 = puVar6[9];
      local_c0 = puVar6[8];
      uStack_a8 = puVar6[0xb];
      uStack_b0 = puVar6[10];
      uStack_f8 = puVar6[1];
      local_100 = *puVar6;
      uStack_e8 = puVar6[3];
      uStack_f0 = puVar6[2];
      puVar3 = &local_100;
      FUN_1005b2b44(puVar3,local_190);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined8 *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_100511628(puVar3,uVar1 + 1,1);
      }
      puVar5 = local_68;
      local_178 = &DAT_1009d4e68;
      FUN_1005a8714();
      puVar2 = &DAT_1009d6250;
      local_170 = puVar3;
      _swift_allocObject(&DAT_1009d6250,0x9a,7);
      *(undefined8 *)(puVar2 + 0x78) = uStack_98;
      *(undefined8 *)(puVar2 + 0x70) = local_a0;
      *(ulong *)(puVar2 + 0x88) = CONCAT62(local_86,uStack_88);
      *(undefined8 *)(puVar2 + 0x80) = uStack_90;
      *(undefined8 *)(puVar2 + 0x92) = uStack_7e;
      *(ulong *)(puVar2 + 0x8a) = CONCAT26(uStack_80,local_86);
      *(undefined8 *)(puVar2 + 0x38) = uStack_d8;
      *(undefined8 *)(puVar2 + 0x30) = local_e0;
      *(undefined8 *)(puVar2 + 0x48) = uStack_c8;
      *(undefined8 *)(puVar2 + 0x40) = uStack_d0;
      *(undefined8 *)(puVar2 + 0x58) = uStack_b8;
      *(undefined8 *)(puVar2 + 0x50) = local_c0;
      *(undefined8 *)(puVar2 + 0x68) = uStack_a8;
      *(undefined8 *)(puVar2 + 0x60) = uStack_b0;
      *(undefined8 *)(puVar2 + 0x18) = uStack_f8;
      *(undefined8 *)(puVar2 + 0x10) = local_100;
      *(undefined8 *)(puVar2 + 0x28) = uStack_e8;
      *(undefined8 *)(puVar2 + 0x20) = uStack_f0;
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      local_190[0] = puVar2;
      thunk_FUN_1000a0074(local_190,puVar5 + uVar1 * 0x28 + 0x20);
      puVar6 = puVar6 + 0x12;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar5;
}

