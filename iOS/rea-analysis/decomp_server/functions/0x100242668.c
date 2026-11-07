// rea decompile_all
// name: FUN_100242668
// address: 0x100242668
// body: available
// range: 0x100242668-0x10024288b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100242668(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_70;
  ulong uStack_68;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_2);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar1 != 0) {
    uVar7 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar7 = 1;
    }
    uVar8 = 4L << uVar7;
    uVar9 = 0xf;
    do {
      uVar12 = uVar9 & 0xc;
      uVar3 = uVar9;
      if (uVar12 == uVar8) {
        FUN_10000caa8(uVar9,param_1,param_2);
      }
      uVar11 = uVar3 >> 0x10;
      if (uVar1 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100242888);
        (*pcVar2)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) != 0) {
          local_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          uVar10 = *(undefined1 *)((long)&local_70 + uVar11);
          goto joined_r0x000100242774;
        }
        uVar3 = (param_2 & 0xfffffffffffffff) + 0x20;
        if ((param_1 >> 0x3c & 1) == 0) {
          uVar3 = param_1;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
        }
        uVar10 = *(undefined1 *)(uVar3 + uVar11);
        if (uVar12 == uVar8) goto LAB_100242778;
LAB_100242734:
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_100242738;
LAB_100242790:
        if (uVar1 <= uVar9 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10024288c);
          (*pcVar2)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar9,param_1,param_2);
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
        uVar10 = (undefined1)uVar3;
joined_r0x000100242774:
        if (uVar12 != uVar8) goto LAB_100242734;
LAB_100242778:
        FUN_10000caa8(uVar9,param_1,param_2);
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_100242790;
LAB_100242738:
        uVar9 = (uVar9 & 0xffffffffffff0000) + 0x10004;
      }
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_100035f84(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6,&DAT_100a7e2f0,&DAT_1008133a8);
      }
      uVar3 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_100035f84(puVar6,uVar3 + 1,1,puVar5,&DAT_100a7e2f0,&DAT_1008133a8);
      }
      *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
      puVar6[uVar3 + 0x20] = uVar10;
    } while (uVar1 * 4 - (uVar9 >> 0xe) != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return puVar6;
}

