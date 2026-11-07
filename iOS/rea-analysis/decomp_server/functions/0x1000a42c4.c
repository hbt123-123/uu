// rea decompile_all
// name: FUN_1000a42c4
// address: 0x1000a42c4
// body: available
// range: 0x1000a42c4-0x1000a452b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000a42c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_90 [4];
  long local_70;
  undefined *local_68;
  
  puVar2 = (undefined *)0x0;
  FUN_1000aaa7c();
  lVar9 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar6 = (undefined8 *)(lVar8 - extraout_x12);
  FUN_1000a38a8();
  if ((param_3 & 1) != 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    puVar6[-2] = puVar2;
    puVar6[-1] = param_2;
    FUN_1003fb4bc(FUN_1000aacac,puVar6 + -4,0xd000000000000094,0x8000000100880950,0x737365537473696c
                  ,0xee002928736e6f69,0xfc,0);
    FUN_1000aacb4(puVar2,param_2,1);
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  uVar10 = *(ulong *)(puVar2 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar10 != 0) {
    uVar11 = 0;
    local_70 = lVar8;
    do {
      uVar3 = 0x65746f6d65727575;
      if (*(ulong *)(puVar2 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000a452c);
        (*pcVar1)();
      }
      uVar12 = (ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
      lVar7 = *(long *)(lVar9 + 0x48);
      FUN_1000aac2c(puVar2 + lVar7 * uVar11 + uVar12,puVar6);
      __sSS9hasPrefixySbSSF(0x65746f6d65727575,0xe90000000000002d,*puVar6,puVar6[1]);
      if ((uVar3 & 1) == 0) {
        FUN_1000aac70(puVar6);
      }
      else {
        FUN_1000aaad0(puVar6,lVar8);
        puVar4 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        local_68 = puVar5;
        if (((ulong)puVar4 & 1) == 0) {
          FUN_10006fd00(0,*(long *)(puVar5 + 0x10) + 1,1);
        }
        uVar3 = *(ulong *)(local_68 + 0x10);
        if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar3) {
          FUN_10006fd00(1 < *(ulong *)(local_68 + 0x18),uVar3 + 1,1);
        }
        puVar5 = local_68;
        lVar8 = local_70;
        *(ulong *)(local_68 + 0x10) = uVar3 + 1;
        FUN_1000aaad0(local_70,local_68 + uVar3 * lVar7 + uVar12);
      }
      uVar11 = uVar11 + 1;
    } while (uVar10 != uVar11);
  }
  _swift_bridgeObjectRelease(puVar2);
  return puVar5;
}

