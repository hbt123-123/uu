// rea decompile_all
// name: FUN_100076f28
// address: 0x100076f28
// body: available
// range: 0x100076f28-0x100077103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_100076f28(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  byte abStack_90 [8];
  undefined *local_88;
  undefined8 local_80;
  
  puVar4 = &DAT_1001045c0;
  FUN_10000eb08(&DAT_1001045c0,&DAT_1000d4c88);
  uVar8 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  pbVar10 = abStack_90 + -uVar8;
  pbVar12 = pbVar10 + -uVar8;
  lVar5 = 0;
  __s10Foundation11JSONEncoderC16OutputFormattingVMa();
  lVar11 = *(long *)(lVar5 + -8);
  uVar8 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)pbVar12 - uVar8;
  lVar14 = lVar13 - uVar8;
  pcVar9 = *(code **)(lVar11 + 0x10);
  (*pcVar9)(lVar13);
  puVar6 = &DAT_1001045c8;
  FUN_100077e10(&DAT_1001045c8,
                PTR___s10Foundation11JSONEncoderC16OutputFormattingVs10SetAlgebraAAMc_1000f07b8);
  local_88 = puVar6;
  __ss10SetAlgebraP12intersectionyxxFTj(lVar14,param_2,lVar5);
  puVar6 = &DAT_1001045d0;
  FUN_100077e10(&DAT_1001045d0,PTR___s10Foundation11JSONEncoderC16OutputFormattingVSQAAMc_1000f07b0)
  ;
  lVar7 = lVar14;
  local_80 = param_2;
  __sSQ2eeoiySbx_xtFZTj(lVar14,param_2,lVar5,puVar6);
  iVar2 = *(int *)(puVar4 + 0x30);
  *pbVar12 = ((byte)lVar7 ^ 0xff) & 1;
  if ((~(uint)lVar7 & 1) == 0) {
    (**(code **)(lVar11 + 0x20))(pbVar12 + iVar2,lVar14,lVar5);
  }
  else {
    (**(code **)(lVar11 + 8))(lVar14,lVar5);
    uVar3 = local_80;
    (*pcVar9)(pbVar12 + iVar2,local_80,lVar5);
    (*pcVar9)(lVar13,uVar3,lVar5);
    __ss10SetAlgebraP9formUnionyyxnFTj(lVar13,lVar5,local_88);
  }
  FUN_100077e50(pbVar12,pbVar10);
  bVar1 = *pbVar10;
  (**(code **)(lVar11 + 0x20))(param_1,pbVar10 + *(int *)(puVar4 + 0x30),lVar5);
  return bVar1;
}

