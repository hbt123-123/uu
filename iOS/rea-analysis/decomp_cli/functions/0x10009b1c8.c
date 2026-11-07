// rea decompile_all
// name: FUN_10009b1c8
// address: 0x10009b1c8
// body: available
// range: 0x10009b1c8-0x10009b307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009b1c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_5 + 0x28));
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,param_1,param_2);
  uVar1 = *(ulong *)(param_3 + 0x10);
  __ss6HasherV8_combineyySuF();
  lVar4 = *(long *)(param_3 + 0x10);
  if (lVar4 != 0) {
    puVar5 = (ulong *)(param_3 + 0x28);
    do {
      uVar2 = puVar5[-1];
      uVar1 = *puVar5;
      _swift_bridgeObjectRetain(uVar1);
      __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar2,uVar1);
      _swift_bridgeObjectRelease();
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  __ss6HasherV9_finalizeSiyF();
  lVar4 = param_5 + 0x40;
  uVar2 = -1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  __ss10_HashTableV8nextHole9atOrAfterAB6BucketVAF_tF(uVar1,lVar4,~uVar2);
  uVar2 = uVar1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar4 + uVar2) = 1L << (uVar1 & 0x3f) | *(ulong *)(lVar4 + uVar2);
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x30) + uVar1 * 0x18);
  *puVar3 = param_1;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x38) + uVar1 * 0x48);
  *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(param_4 + 8);
  uVar8 = param_4[4];
  uVar7 = param_4[7];
  uVar6 = param_4[6];
  puVar3[5] = param_4[5];
  puVar3[4] = uVar8;
  puVar3[7] = uVar7;
  puVar3[6] = uVar6;
  uVar6 = *param_4;
  uVar8 = param_4[3];
  uVar7 = param_4[2];
  puVar3[1] = param_4[1];
  *puVar3 = uVar6;
  puVar3[3] = uVar8;
  puVar3[2] = uVar7;
  *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
  return;
}

