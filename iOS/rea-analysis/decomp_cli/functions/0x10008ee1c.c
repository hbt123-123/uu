// rea decompile_all
// name: FUN_10008ee1c
// address: 0x10008ee1c
// body: available
// range: 0x10008ee1c-0x10008efb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10008ee1c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined *local_208 [26];
  undefined *local_138;
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
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar9 = *(long *)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (lVar9 != 0) {
    local_138 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_1000798d0(0,lVar9,0);
    puVar4 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar8 = local_138;
      uStack_88 = puVar4[0x15];
      local_90 = puVar4[0x14];
      uStack_78 = puVar4[0x17];
      uStack_80 = puVar4[0x16];
      uStack_68 = puVar4[0x19];
      local_70 = puVar4[0x18];
      uStack_c8 = puVar4[0xd];
      local_d0 = puVar4[0xc];
      uStack_b8 = puVar4[0xf];
      uStack_c0 = puVar4[0xe];
      uStack_a8 = puVar4[0x11];
      local_b0 = puVar4[0x10];
      uStack_98 = puVar4[0x13];
      uStack_a0 = puVar4[0x12];
      uStack_108 = puVar4[5];
      local_110 = puVar4[4];
      uStack_f8 = puVar4[7];
      uStack_100 = puVar4[6];
      uStack_e8 = puVar4[9];
      local_f0 = puVar4[8];
      uStack_d8 = puVar4[0xb];
      uStack_e0 = puVar4[10];
      uStack_128 = puVar4[1];
      local_130 = *puVar4;
      uStack_118 = puVar4[3];
      uStack_120 = puVar4[2];
      puVar2 = &local_130;
      ppuVar6 = local_208;
      FUN_10006ff98();
      FUN_100084bb8();
      FUN_10008efb4(&local_130);
      uVar1 = *(ulong *)(puVar8 + 0x10);
      local_138 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        FUN_1000798d0(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_138 + 0x10) = uVar1 + 1;
      *(undefined8 **)(local_138 + uVar1 * 0x10 + 0x20) = puVar2;
      *(undefined ***)(local_138 + uVar1 * 0x10 + 0x28) = ppuVar6;
      puVar4 = puVar4 + 0x1a;
      lVar9 = lVar9 + -1;
      puVar8 = local_138;
    } while (lVar9 != 0);
  }
  puVar3 = &DAT_100103ed8;
  local_208[0] = puVar8;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar4 = &DAT_100103ee0;
  FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
  uVar5 = 0x202f20;
  uVar7 = 0xe300000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202f20,0xe300000000000000,puVar3,puVar4);
  _swift_bridgeObjectRelease(puVar8);
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar5;
  return auVar10;
}

