// rea decompile_all
// name: FUN_1001f8598
// address: 0x1001f8598
// body: available
// range: 0x1001f8598-0x1001f872b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001f8598(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  ulong local_60;
  ulong uStack_58;
  
  uVar9 = 0x68737a2f6e69622f;
  lVar4 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    uVar2 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      __sSS10lowercasedSSyF();
      local_60 = param_1;
      uStack_58 = param_2;
      __s10Foundation12CharacterSetV11whitespacesACvgZ(lVar10);
      FUN_10009ff0c();
      lVar5 = lVar10;
      puVar6 = PTR___sSSN_1009957f8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (lVar10,PTR___sSSN_1009957f8,param_1);
      (**(code **)(lVar11 + 8))(lVar10,lVar4);
      _swift_bridgeObjectRelease(param_2);
      if (DAT_100a73bf8 != -1) {
        _swift_once(&DAT_100a73bf8,FUN_1001e93b8);
      }
      puVar3 = DAT_100a7d528;
      if (*(long *)(DAT_100a7d528 + 0x10) != 0) {
        _swift_bridgeObjectRetain(DAT_100a7d528);
        puVar7 = puVar6;
        FUN_1001a2c70();
        if (((ulong)puVar7 & 1) != 0) {
          puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + lVar5 * 0x10);
          uVar9 = *puVar1;
          uVar8 = puVar1[1];
          _swift_bridgeObjectRetain(uVar8);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(puVar3);
          goto LAB_1001f86f4;
        }
        _swift_bridgeObjectRelease(puVar6);
        puVar6 = puVar3;
      }
      _swift_bridgeObjectRelease(puVar6);
    }
  }
  uVar8 = 0xe800000000000000;
LAB_1001f86f4:
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = uVar9;
  return auVar12;
}

