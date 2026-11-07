// rea decompile_all
// name: FUN_1007c5044
// address: 0x1007c5044
// body: available
// range: 0x1007c5044-0x1007c553b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001007c5374) */
/* WARNING: Removing unreachable block (ram,0x0001007c5484) */
/* WARNING: Removing unreachable block (ram,0x0001007c5228) */
/* WARNING: Removing unreachable block (ram,0x0001007c518c) */
/* WARNING: Removing unreachable block (ram,0x0001007c5284) */
/* WARNING: Removing unreachable block (ram,0x0001007c51c0) */
/* WARNING: Removing unreachable block (ram,0x0001007c52a0) */
/* WARNING: Removing unreachable block (ram,0x0001007c542c) */
/* WARNING: Removing unreachable block (ram,0x0001007c52d8) */
/* WARNING: Removing unreachable block (ram,0x0001007c52dc) */
/* WARNING: Removing unreachable block (ram,0x0001007c5414) */
/* WARNING: Removing unreachable block (ram,0x0001007c531c) */
/* WARNING: Removing unreachable block (ram,0x0001007c5468) */
/* WARNING: Removing unreachable block (ram,0x0001007c53cc) */
/* WARNING: Removing unreachable block (ram,0x0001007c54e4) */
/* WARNING: Removing unreachable block (ram,0x0001007c53f8) */
/* WARNING: Removing unreachable block (ram,0x0001007c5158) */

void FUN_1007c5044(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long alStack_c0 [3];
  undefined8 *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar4 = &DAT_100abc950;
  local_98 = param_1;
  FUN_1007b4550();
  lVar8 = (long)alStack_c0 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_a0 = lVar8;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar5 + -8);
  lVar8 = lVar8 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_1007c5008();
  lVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar1);
  __ss7DecoderP20singleValueContainers06Singlec8DecodingD0_pyKFTj(auStack_88,uVar1,uVar2);
  uVar1 = local_98;
  if (unaff_x21 == 0) {
    alStack_c0[1] = lVar8;
    alStack_c0[2] = lVar7;
    local_a8 = (undefined8 *)(lVar8 - (lVar6 + 0xfU & 0xfffffffffffffff0));
    FUN_10003f030(auStack_88,local_70);
    __ss28SingleValueDecodingContainerP6decodeyS2imKFTj(local_70,uStack_68);
    puVar3 = local_a8;
    *local_a8 = local_70;
    _swift_storeEnumTagMultiPayload(puVar3,lVar5,1);
    FUN_10003f094(auStack_88);
    FUN_1007c6368(puVar3,uVar1);
  }
  FUN_10003f094(param_2);
  return;
}

