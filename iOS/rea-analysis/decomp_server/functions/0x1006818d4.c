// rea decompile_all
// name: FUN_1006818d4
// address: 0x1006818d4
// body: available
// range: 0x1006818d4-0x100681b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006818d4(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long local_128 [4];
  undefined *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_c9;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_71;
  
  FUN_10003e8bc(param_2,auStack_c0);
  puVar7 = PTR___sypN_100995e88;
  puVar4 = &local_f8;
  _swift_dynamicCast(puVar4,auStack_c0,PTR___sypN_100995e88 + 8,&DAT_1009e6360,0);
  if ((int)puVar4 == 0) {
    puVar5 = &DAT_100ab9e98;
    FUN_100004bb4(&DAT_100ab9e98,&DAT_10084d520);
    plVar6 = local_128;
    _swift_dynamicCast(plVar6,auStack_c0,puVar7 + 8,puVar5,0);
    if ((int)plVar6 == 0) {
      puVar5 = &DAT_100ab9ea0;
      FUN_100004bb4(&DAT_100ab9ea0,&DAT_10084d528);
      puVar4 = &local_a0;
      _swift_dynamicCast(puVar4,auStack_c0,puVar7 + 8,puVar5,0);
      uVar2 = local_a0;
      if ((int)puVar4 == 0) {
        FUN_10003e8bc(param_2,param_1);
      }
      else {
        local_f8 = local_a0;
        _swift_bridgeObjectRetain(local_a0);
        FUN_100682400();
        _swift_bridgeObjectRelease(uVar2);
        param_1[3] = puVar5;
        *param_1 = local_f8;
      }
    }
    else {
      uVar8 = *(ulong *)(local_128[0] + 0x10);
      if (uVar8 == 0) {
        _swift_bridgeObjectRelease(local_128[0]);
        puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        local_108 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_10068ca04(0,uVar8,0);
        uVar10 = 0;
        puVar7 = local_108;
        lVar9 = local_128[0];
        do {
          lVar9 = lVar9 + 0x20;
          if (*(ulong *)(local_128[0] + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100681b34);
            (*pcVar3)();
          }
          FUN_10003e8bc(lVar9,&local_f8);
          FUN_1006818d4(&local_a0,&local_f8);
          FUN_10003f094(&local_f8);
          uVar1 = *(ulong *)(puVar7 + 0x10);
          local_108 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
            FUN_10068ca04(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
          }
          puVar7 = local_108;
          uVar10 = uVar10 + 1;
          *(ulong *)(local_108 + 0x10) = uVar1 + 1;
          FUN_10007f3d4(&local_a0,local_108 + uVar1 * 0x20 + 0x20);
        } while (uVar8 != uVar10);
        _swift_bridgeObjectRelease(local_128[0]);
      }
      param_1[3] = puVar5;
      *param_1 = puVar7;
    }
  }
  else {
    uStack_98 = uStack_f0;
    local_a0 = local_f8;
    uStack_88 = uStack_e0;
    uStack_90 = local_e8;
    local_80 = local_d8;
    uStack_71 = uStack_c9;
    thunk_FUN_100686184(local_128);
    FUN_1006818d4(param_1,local_128);
    FUN_10068e548(&local_a0);
    FUN_10003f094(local_128);
  }
  FUN_10003f094(auStack_c0);
  return;
}

