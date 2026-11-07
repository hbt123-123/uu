// rea decompile_all
// name: FUN_10026940c
// address: 0x10026940c
// body: available
// range: 0x10026940c-0x1002696cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002696b8) */

void FUN_10026940c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x20;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long local_120 [2];
  code *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long alStack_90 [3];
  long local_78;
  undefined **ppuStack_70;
  
  lVar8 = *unaff_x20;
  puVar4 = &DAT_100a81018;
  local_120[1] = param_1;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  lVar6 = (long)local_120 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_f8 = lVar6;
  FUN_100272854();
  puVar12 = (undefined8 *)
            (lVar6 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  local_108 = lVar5;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(lVar6 + -8);
  lVar13 = (long)puVar12 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar9 = (long *)unaff_x20[8];
  ppuStack_70 = &PTR_PTR_1009af618;
  local_100 = lVar5;
  local_78 = lVar6;
  FUN_1000efc08(alStack_90);
  local_110 = *(code **)(lVar5 + 0x10);
  (*local_110)();
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  plVar7 = alStack_90;
  (**(code **)(*plVar9 + 0xe8))(plVar7,&local_c0,2);
  FUN_100040bb4(&local_c0,&DAT_100a81368,&DAT_100815500);
  FUN_10003f094(alStack_90);
  pcVar11 = *(code **)(*plVar7 + 0x2c8);
  _swift_retain(plVar7);
  (*pcVar11)();
  _swift_release();
  lVar10 = unaff_x20[9];
  uVar1 = *(undefined8 *)(lVar8 + 0x50);
  uVar2 = *(undefined8 *)(lVar8 + 0x58);
  local_e0 = uVar1;
  uStack_d8 = uVar2;
  local_d0 = param_3;
  FUN_1002676e4(lVar13,param_2,FUN_10026b868,auStack_f0,lVar10);
  _swift_release(plVar7);
  lVar5 = local_f8;
  local_120[0] = lVar13;
  (*local_110)(local_f8,lVar13,lVar6);
  pcVar11 = *(code **)(local_100 + 0x38);
  (*pcVar11)(lVar5,0,1,lVar6);
  iVar3 = *(int *)(local_108 + 0x14);
  local_108 = lVar6;
  (*pcVar11)((long)puVar12 + (long)iVar3,1,1,lVar6);
  *puVar12 = plVar7;
  FUN_10026b244(local_f8,(long)puVar12 + (long)iVar3);
  uVar14 = *(ulong *)(lVar10 + 0x10);
  if (uVar14 != 0) {
    uVar15 = 0;
    lVar5 = lVar10 + 0x20;
    do {
      if (*(ulong *)(lVar10 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002696b8);
        (*pcVar11)();
      }
      FUN_1000b142c(lVar5,alStack_90);
      FUN_100269d64(alStack_90,puVar12,param_3,uVar1,uVar2);
      uVar15 = uVar15 + 1;
      FUN_10003f094(alStack_90);
      lVar5 = lVar5 + 0x28;
    } while (uVar14 != uVar15);
  }
  (**(code **)(local_100 + 0x20))(local_120[1],local_120[0],local_108);
  FUN_1000d27dc(puVar12,FUN_100272854);
  return;
}

