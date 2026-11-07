// rea decompile_all
// name: FUN_1002ed580
// address: 0x1002ed580
// body: available
// range: 0x1002ed580-0x1002ed65b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ed580(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(param_2 + 0x28));
  uVar2 = 0;
  __s10Foundation4UUIDVMa(0);
  puVar3 = &DAT_100a82768;
  FUN_100005c90(&DAT_100a82768,PTR___s10Foundation4UUIDVMa_100996230,
                PTR___s10Foundation4UUIDVSHAAMc_100996248);
  puVar4 = auStack_78;
  __sSH4hash4intoys6HasherVz_tFTj(puVar4,uVar2,puVar3);
  __ss6HasherV9_finalizeSiyF();
  lVar1 = param_2 + 0x38;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar5 = (ulong)puVar4 & (uVar6 ^ 0xffffffffffffffff);
  __ss10_HashTableV8nextHole9atOrAfterAB6BucketVAF_tF(uVar5,lVar1,~uVar6);
  uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar6);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar5 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}

