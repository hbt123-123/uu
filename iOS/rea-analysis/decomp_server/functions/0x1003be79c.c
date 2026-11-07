// rea decompile_all
// name: FUN_1003be79c
// address: 0x1003be79c
// body: available
// range: 0x1003be79c-0x1003be97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1003be79c(code *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *local_90;
  undefined8 local_88;
  long lStack_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  lVar3 = 0;
  FUN_1003d0d4c();
  local_68 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_68 + 0x40));
  lVar3 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar8 = lVar3 - extraout_x12;
  local_78 = *(ulong *)(param_3 + 0x10);
  if (local_78 != 0) {
    uVar7 = 0;
    local_90 = param_1;
    local_88 = param_2;
    lStack_80 = param_3;
    do {
      if (*(ulong *)(param_3 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003be980);
        (*pcVar2)();
      }
      uVar6 = (ulong)*(byte *)(local_68 + 0x50) + 0x20 &
              ((ulong)*(byte *)(local_68 + 0x50) ^ 0xffffffffffffffff);
      lVar3 = *(long *)(local_68 + 0x48);
      FUN_1003c1830(param_3 + uVar6 + lVar3 * uVar7,uVar8);
      uVar4 = uVar8;
      (*param_1)();
      if (unaff_x21 != 0) {
        FUN_1003c1874(uVar8);
        _swift_release(puVar1);
        break;
      }
      if ((uVar4 & 1) == 0) {
        FUN_1003c1874(uVar8);
      }
      else {
        FUN_1003c18b0(uVar8,local_70);
        puVar5 = puVar1;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          FUN_1003ffb84(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar4 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
          FUN_1003ffb84(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar4 + 1;
        FUN_1003c18b0(local_70,puVar1 + uVar4 * lVar3 + uVar6);
        param_3 = lStack_80;
        param_1 = local_90;
      }
      uVar7 = uVar7 + 1;
    } while (local_78 != uVar7);
  }
  _swift_bridgeObjectRelease(param_3);
  return puVar1;
}

