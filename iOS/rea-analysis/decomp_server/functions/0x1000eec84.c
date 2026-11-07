// rea decompile_all
// name: FUN_1000eec84
// address: 0x1000eec84
// body: available
// range: 0x1000eec84-0x1000eef27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000eec84(undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,code *param_6,undefined8 param_7)

{
  undefined2 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_d0 [16];
  undefined8 auStack_c0 [2];
  int aiStack_b0 [4];
  undefined1 auStack_a0 [8];
  undefined2 *local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  code *pcStack_78;
  ulong local_70 [2];
  
  lVar3 = 0;
  local_80 = param_7;
  pcStack_78 = param_6;
  __s10Foundation4DateVMa();
  local_88 = *(long *)(lVar3 + -8);
  local_70[0] = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_88 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1000eb43c();
  local_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a77cf0;
  FUN_100004bb4(&DAT_100a77cf0,&DAT_10080d400);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined1 *)(lVar3 - extraout_x8_01);
  local_70[1] = param_2;
  FUN_1000ee3d8(puVar8,param_3,param_4);
  puVar5 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,puVar4);
  if ((int)puVar5 == 1) {
    *(undefined1 *)param_1 = *puVar8;
    *(undefined1 *)((long)param_1 + 1) = 1;
  }
  else {
    local_98 = param_1;
    FUN_1000e34e8(puVar8,lVar3);
    uVar9 = *(ulong *)(lVar3 + 0x30);
    if (*(ulong *)(uVar9 + 0x10) != 0) {
      uVar7 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)(uVar9 + lVar10) == param_5) {
          uVar6 = uVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar6 & 1) == 0) {
            FUN_10006f99c();
          }
          puVar1 = local_98;
          if (*(ulong *)(uVar9 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000eef28);
            (*pcVar2)();
          }
          (*pcStack_78)(uVar9 + lVar10);
          *(ulong *)(lVar3 + 0x30) = uVar9;
          __s10Foundation4DateVACycfC(puVar11);
          (**(code **)(local_88 + 0x28))(lVar3 + *(int *)(local_90 + 0x24),puVar11,local_70[0]);
          lVar10 = lVar3;
          FUN_1000ee024();
          *(char *)puVar1 = (char)lVar10;
          *(byte *)((long)puVar1 + 1) = (byte)((ulong)lVar10 >> 8) & 1;
          goto LAB_1000eeee8;
        }
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0x58;
      } while (*(ulong *)(uVar9 + 0x10) != uVar7);
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(puVar8 + -0x20) = param_3;
    *(undefined8 *)(puVar8 + -0x18) = param_4;
    *(int *)(puVar8 + -0x10) = param_5;
    FUN_1003fb4ec(FUN_1000ef60c,puVar8 + -0x30,0xd0000000000000a9,0x80000001008887a0,
                  0xd00000000000002a,0x8000000100888b40,0x3b,0);
    *local_98 = 0x101;
LAB_1000eeee8:
    FUN_1000e3550(lVar3);
  }
  return;
}

