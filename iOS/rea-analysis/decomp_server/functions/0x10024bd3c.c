// rea decompile_all
// name: FUN_10024bd3c
// address: 0x10024bd3c
// body: available
// range: 0x10024bd3c-0x10024bf83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10024bd3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_90 [8];
  undefined *local_88;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  long local_68;
  
  lVar1 = 0;
  __s10Foundation8CalendarV9ComponentOMa();
  lVar14 = *(long *)(lVar1 + -8);
  uVar5 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar11 = auStack_90 + -uVar5;
  local_68 = (long)puVar11 - uVar5;
  local_88 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_100995eb0;
  if (local_88 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100a7fcf8,&DAT_100814588);
    puVar2 = local_88;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    local_78 = (undefined *)0x0;
    local_70 = puVar2 + 0x38;
    local_80 = param_1 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar14 + 0x48);
    pcVar13 = *(code **)(lVar14 + 0x10);
    do {
      (*pcVar13)(local_68,local_80 + lVar12 * (long)local_78,lVar1);
      uVar10 = *(ulong *)(puVar2 + 0x28);
      puVar3 = &DAT_100a7fd00;
      FUN_100005c90(&DAT_100a7fd00,PTR___s10Foundation8CalendarV9ComponentOMa_1009962a0,
                    PTR___s10Foundation8CalendarV9ComponentOSHAAMc_1009962b0);
      __sSH13_rawHashValue4seedS2i_tFTj(uVar10,lVar1,puVar3);
      uVar6 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar10 = uVar10 & (uVar6 ^ 0xffffffffffffffff);
      uVar7 = uVar10 >> 6;
      uVar8 = *(ulong *)(local_70 + uVar7 * 8);
      uVar9 = 1L << (uVar10 & 0x3f);
      uVar5 = uVar9 & uVar8;
      while (uVar5 != 0) {
        (*pcVar13)(puVar11,*(long *)(puVar2 + 0x30) + uVar10 * lVar12,lVar1);
        puVar3 = &DAT_100a7fd08;
        FUN_100005c90(&DAT_100a7fd08,PTR___s10Foundation8CalendarV9ComponentOMa_1009962a0,
                      PTR___s10Foundation8CalendarV9ComponentOSQAAMc_1009962b8);
        puVar4 = puVar11;
        __sSQ2eeoiySbx_xtFZTj(puVar11,local_68,lVar1,puVar3);
        pcVar15 = *(code **)(lVar14 + 8);
        (*pcVar15)(puVar11,lVar1);
        if (((ulong)puVar4 & 1) != 0) {
          (*pcVar15)(local_68,lVar1);
          goto LAB_10024be00;
        }
        uVar10 = uVar10 + 1 & ~uVar6;
        uVar7 = uVar10 >> 6;
        uVar8 = *(ulong *)(local_70 + uVar7 * 8);
        uVar9 = 1L << (uVar10 & 0x3f);
        uVar5 = uVar9 & uVar8;
      }
      *(ulong *)(local_70 + uVar7 * 8) = uVar9 | uVar8;
      (**(code **)(lVar14 + 0x20))(*(long *)(puVar2 + 0x30) + uVar10 * lVar12,local_68,lVar1);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10024bf84);
        (*pcVar13)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_10024be00:
      local_78 = local_78 + 1;
    } while (local_78 != local_88);
  }
  return puVar2;
}

