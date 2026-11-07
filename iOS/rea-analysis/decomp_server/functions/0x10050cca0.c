// rea decompile_all
// name: FUN_10050cca0
// address: 0x10050cca0
// body: available
// range: 0x10050cca0-0x10050ce3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050cca0(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  long unaff_x20;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [16];
  ulong local_80;
  long lStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_58;
  
  lVar13 = *(long *)(param_3 - 8);
  lVar5 = *(long *)(lVar13 + 0x40);
  FUN_100507c1c(param_2,2);
  local_70 = 0;
  uVar2 = 0;
  local_80 = param_3;
  lStack_78 = param_4;
  lStack_68 = param_1;
  __sSaMa(0,param_3);
  puVar3 = PTR___sSayxGSTsMc_100995898;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar2);
  __sSTsE6reduceyqd__qd___qd__qd___7ElementQztKXEtKlF
            (&local_58,&local_70,FUN_10050bd84,auStack_90,uVar2,PTR___sSiN_100995968,puVar3);
  thunk_FUN_100507c64(local_58);
  lVar12 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar12 != 0) {
    lVar12 = 0;
    pcVar8 = *(code **)(param_4 + 0x28);
    pbVar11 = *(byte **)(unaff_x20 + 8);
    do {
      __sSayxSicig(&stack0xffffffffffffff60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),lVar12,param_1,
                   param_3);
      bVar1 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10050ce40);
        (*pcVar8)();
      }
      uVar6 = param_3;
      (*pcVar8)(param_3,param_4);
      (**(code **)(lVar13 + 8))
                (&stack0xffffffffffffff60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_3);
      uVar9 = uVar6;
      pbVar10 = pbVar11;
      if (0x7f < uVar6) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar9 | 0x80;
          uVar6 = uVar9 >> 7;
          uVar7 = uVar9 >> 0xe;
          uVar9 = uVar6;
          pbVar10 = pbVar11;
        } while (uVar7 != 0);
      }
      pbVar10 = pbVar11 + 1;
      *pbVar11 = (byte)uVar6;
      lVar4 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      pbVar11 = pbVar10;
    } while (lVar12 != lVar4);
    *(byte **)(unaff_x20 + 8) = pbVar10;
  }
  return;
}

