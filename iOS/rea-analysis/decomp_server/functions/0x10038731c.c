// rea decompile_all
// name: FUN_10038731c
// address: 0x10038731c
// body: available
// range: 0x10038731c-0x10038748f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100387450 to 0x100386814 FUN_100386814 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038731c(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uLong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_4a [26];
  
  lVar5 = *(long *)(param_1 + 0x80);
  if (((-1 < *(int *)(lVar5 + 0x18)) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (*(long *)(lVar5 + 0x20) != 0)) {
    puVar2 = *(undefined8 **)(param_1 + 0xa8);
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0xa0) + 0x20);
    uVar9 = puVar6[10];
    uVar11 = puVar6[0xd];
    uVar10 = puVar6[0xc];
    uVar15 = puVar6[7];
    uVar14 = puVar6[6];
    uVar13 = puVar6[9];
    uVar12 = puVar6[8];
    puVar2[0xb] = puVar6[0xb];
    puVar2[10] = uVar9;
    puVar2[0xd] = uVar11;
    puVar2[0xc] = uVar10;
    puVar2[7] = uVar15;
    puVar2[6] = uVar14;
    puVar2[9] = uVar13;
    puVar2[8] = uVar12;
    uVar10 = puVar6[1];
    uVar9 = *puVar6;
    uVar11 = puVar6[2];
    uVar13 = puVar6[5];
    uVar12 = puVar6[4];
    puVar2[3] = puVar6[3];
    puVar2[2] = uVar11;
    puVar2[5] = uVar13;
    puVar2[4] = uVar12;
    puVar2[1] = uVar10;
    *puVar2 = uVar9;
    uVar8 = *(ulong *)(param_1 + 0x88);
    uVar3 = param_1;
    FUN_1003874a4();
    *(ulong *)(param_1 + 0x88) = uVar3;
    if (uVar3 != 0) {
      uVar7 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x28);
      if (((uVar3 < uVar7) && (uVar3 + 4 <= uVar7)) &&
         (lVar5 = uVar3 - uVar8, uVar8 <= uVar3 && lVar5 != 0)) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x20) + 4;
        uVar4 = _crc32((ulong)*(uint *)(param_1 + 0x9c),(Bytef *)(lVar1 + uVar8),(uInt)lVar5);
        *(int *)(param_1 + 0x9c) = (int)uVar4;
        if (**(int **)(param_1 + 0xa8) == (int)uVar4) {
          thunk_FUN_10037e874(auStack_4a,lVar1,*(undefined8 *)(param_1 + 0x88),1);
          if (*(long *)(param_1 + 0xb0) == 0) {
            FUN_1003919bc(*(undefined8 *)(param_1 + 0x68),auStack_4a,uVar8);
          }
          else {
            FUN_100391a80(*(undefined8 *)(param_1 + 0x70),auStack_4a,*(long *)(param_1 + 0xb0),uVar8
                         );
          }
          FUN_10037dc98(*(undefined8 *)(param_1 + 0x90),lVar5);
          *(undefined1 *)(param_1 + 0x99) = 0;
          thunk_FUN_10037edac(auStack_4a);
          return;
        }
        FUN_100386734(3,"MMKV_IO.cpp","partialLoadFromFile",0xb5,
                      "m_crcDigest[%u] != m_metaInfo->m_crcDigest[%u]");
      }
    }
    FUN_10037f730(param_1,0);
    FUN_100386814(param_1);
    return;
  }
  return;
}

