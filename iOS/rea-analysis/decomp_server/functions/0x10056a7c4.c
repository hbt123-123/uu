// rea decompile_all
// name: FUN_10056a7c4
// address: 0x10056a7c4
// body: available
// range: 0x10056a7c4-0x10056a947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10056a7c4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *local_1f8 [3];
  undefined *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined1 local_70;
  undefined *local_68;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar4 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100511628(0,lVar4,0);
    puVar6 = (undefined8 *)(param_1 + 0x20);
    puVar5 = local_68;
    do {
      uStack_88 = puVar6[0x15];
      local_90 = puVar6[0x14];
      uStack_78 = puVar6[0x17];
      uStack_80 = puVar6[0x16];
      local_70 = *(undefined1 *)(puVar6 + 0x18);
      uStack_c8 = puVar6[0xd];
      local_d0 = puVar6[0xc];
      uStack_b8 = puVar6[0xf];
      uStack_c0 = puVar6[0xe];
      uStack_a8 = puVar6[0x11];
      local_b0 = puVar6[0x10];
      uStack_98 = puVar6[0x13];
      uStack_a0 = puVar6[0x12];
      uStack_108 = puVar6[5];
      local_110 = puVar6[4];
      uStack_f8 = puVar6[7];
      uStack_100 = puVar6[6];
      uStack_e8 = puVar6[9];
      local_f0 = puVar6[8];
      uStack_d8 = puVar6[0xb];
      uStack_e0 = puVar6[10];
      uStack_128 = puVar6[1];
      local_130 = *puVar6;
      uStack_118 = puVar6[3];
      uStack_120 = puVar6[2];
      puVar3 = &local_130;
      FUN_1005b2528(puVar3,local_1f8);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined8 *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_100511628(puVar3,uVar1 + 1,1);
      }
      puVar5 = local_68;
      local_1e0 = &DAT_1009d4610;
      FUN_1005a8554();
      puVar2 = &DAT_1009d6340;
      local_1d8 = puVar3;
      _swift_allocObject(&DAT_1009d6340,0xd1,7);
      *(undefined8 *)(puVar2 + 0xb8) = uStack_88;
      *(undefined8 *)(puVar2 + 0xb0) = local_90;
      *(undefined8 *)(puVar2 + 200) = uStack_78;
      *(undefined8 *)(puVar2 + 0xc0) = uStack_80;
      puVar2[0xd0] = local_70;
      *(undefined8 *)(puVar2 + 0x78) = uStack_c8;
      *(undefined8 *)(puVar2 + 0x70) = local_d0;
      *(undefined8 *)(puVar2 + 0x88) = uStack_b8;
      *(undefined8 *)(puVar2 + 0x80) = uStack_c0;
      *(undefined8 *)(puVar2 + 0x98) = uStack_a8;
      *(undefined8 *)(puVar2 + 0x90) = local_b0;
      *(undefined8 *)(puVar2 + 0xa8) = uStack_98;
      *(undefined8 *)(puVar2 + 0xa0) = uStack_a0;
      *(undefined8 *)(puVar2 + 0x38) = uStack_108;
      *(undefined8 *)(puVar2 + 0x30) = local_110;
      *(undefined8 *)(puVar2 + 0x48) = uStack_f8;
      *(undefined8 *)(puVar2 + 0x40) = uStack_100;
      *(undefined8 *)(puVar2 + 0x58) = uStack_e8;
      *(undefined8 *)(puVar2 + 0x50) = local_f0;
      *(undefined8 *)(puVar2 + 0x68) = uStack_d8;
      *(undefined8 *)(puVar2 + 0x60) = uStack_e0;
      *(undefined8 *)(puVar2 + 0x18) = uStack_128;
      *(undefined8 *)(puVar2 + 0x10) = local_130;
      *(undefined8 *)(puVar2 + 0x28) = uStack_118;
      *(undefined8 *)(puVar2 + 0x20) = uStack_120;
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      local_1f8[0] = puVar2;
      thunk_FUN_1000a0074(local_1f8,puVar5 + uVar1 * 0x28 + 0x20);
      puVar6 = puVar6 + 0x19;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar5;
}

