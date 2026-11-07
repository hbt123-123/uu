// rea decompile_all
// name: FUN_1002fb3d4
// address: 0x1002fb3d4
// body: available
// range: 0x1002fb3d4-0x1002fb7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fb3d4(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  puVar6 = &DAT_100a85400;
  local_98 = param_2;
  FUN_100004bb4(&DAT_100a85400,&DAT_100819850);
  local_88 = *(long *)(*(long *)(puVar6 + -8) + 0x40);
  local_80 = local_88 + 0xfU & 0xfffffffffffffff0;
  puVar5 = (undefined1 *)((long)&local_c0 - local_80);
  local_a0 = *(ulong *)(param_1 + 0x10);
  uVar9 = 0;
  local_c0 = param_1;
  local_90 = puVar5;
  do {
    uVar13 = local_a0;
    puVar6 = &DAT_100a833a0;
    lVar18 = (long)puVar5 - local_80;
    local_70 = puVar5;
    if (uVar9 == local_a0) {
      puVar7 = puVar6;
      FUN_100004bb4(&DAT_100a833a0,&DAT_100817880);
      (**(code **)(*(long *)(puVar7 + -8) + 0x38))(lVar18,1,1,puVar7);
    }
    else {
      if (local_a0 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002fb7b8);
        (*pcVar10)();
      }
      puVar7 = puVar6;
      FUN_100004bb4(&DAT_100a833a0,&DAT_100817880);
      lVar11 = *(long *)(puVar7 + -8);
      FUN_10007f314(local_c0 +
                    ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar11 + 0x48) * uVar9,lVar18,&DAT_100a833a0,&DAT_100817880);
      uVar13 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002fb7bc);
        (*pcVar10)();
      }
      (**(code **)(lVar11 + 0x38))(lVar18,0,1,puVar7);
    }
    lVar12 = lVar18 - (local_88 + 0xfU & 0xfffffffffffffff0);
    FUN_100004bb4(&DAT_100a833a0,&DAT_100817880);
    lVar16 = *(long *)(puVar6 + -8);
    pcVar10 = *(code **)(lVar16 + 0x30);
    lVar11 = lVar18;
    (*pcVar10)(lVar18,1,puVar6);
    local_78 = uVar13;
    if ((int)lVar11 == 1) {
      (**(code **)(lVar16 + 0x38))(lVar12,1,1,puVar6);
    }
    else {
      lVar17 = lVar12 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
      iVar1 = *(int *)(puVar6 + 0x30);
      iVar2 = *(int *)(puVar6 + 0x40);
      lVar11 = 0;
      local_b0 = lVar12;
      local_a8 = lVar18;
      __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
      pcVar14 = *(code **)(*(long *)(lVar11 + -8) + 0x20);
      (*pcVar14)(lVar17,lVar18,lVar11);
      local_b8 = *(undefined8 *)(lVar18 + iVar1);
      puVar7 = &DAT_1009afb78;
      _swift_allocObject(&DAT_1009afb78,0x20,7);
      uVar15 = *(undefined8 *)(lVar18 + iVar2);
      *(undefined8 *)(puVar7 + 0x18) = ((undefined8 *)(lVar18 + iVar2))[1];
      *(undefined8 *)(puVar7 + 0x10) = uVar15;
      iVar1 = *(int *)(puVar6 + 0x30);
      iVar2 = *(int *)(puVar6 + 0x40);
      (*pcVar14)(lVar12,lVar17,lVar11);
      *(undefined8 *)(lVar12 + iVar1) = local_b8;
      *(undefined8 *)(lVar12 + iVar2) = FUN_10030d8dc;
      ((undefined8 *)(lVar12 + iVar2))[1] = puVar7;
      (**(code **)(lVar16 + 0x38))(lVar12,0,1,puVar6);
    }
    puVar4 = local_90;
    FUN_1000a00a8(lVar12,local_90,&DAT_100a85400,&DAT_100819850);
    puVar5 = local_70;
    puVar8 = puVar4;
    (*pcVar10)(puVar4,1,puVar6);
    if ((int)puVar8 == 1) {
      return;
    }
    lVar11 = *(long *)(lVar16 + 0x40);
    uVar9 = lVar11 + 0xfU & 0xfffffffffffffff0;
    lVar12 = (long)puVar5 - uVar9;
    iVar1 = *(int *)(puVar6 + 0x30);
    uVar15 = *(undefined8 *)(puVar4 + iVar1);
    iVar2 = *(int *)(puVar6 + 0x40);
    lVar18 = 0;
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
    uStack_68 = *(undefined8 *)((long)(puVar4 + iVar2) + 8);
    local_70 = *(undefined1 **)(puVar4 + iVar2);
    (**(code **)(*(long *)(lVar18 + -8) + 0x20))(lVar12,puVar4,lVar18);
    *(undefined8 *)(lVar12 + iVar1) = uVar15;
    puVar3 = (undefined8 *)(lVar12 + iVar2);
    puVar3[1] = uStack_68;
    *puVar3 = local_70;
    lVar18 = lVar12 - uVar9;
    FUN_10007f314(lVar12,lVar18,&DAT_100a833a0,&DAT_100817880);
    uVar9 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar13 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
    puVar6 = &DAT_1009afb50;
    _swift_allocObject(&DAT_1009afb50,uVar13 + lVar11,uVar9 | 7);
    FUN_1000a00a8(lVar18,puVar6 + uVar13,&DAT_100a833a0,&DAT_100817880);
    __sSo25NSURLSessionWebSocketTaskC10FoundationE4send_17completionHandleryAbCE7MessageO_ys5Error_pSgctF
              (lVar12,FUN_10030d894,puVar6);
    _swift_release(puVar6);
    FUN_100040bb4(lVar12,&DAT_100a833a0,&DAT_100817880);
    uVar9 = local_78;
  } while( true );
}

