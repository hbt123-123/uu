// rea decompile_all
// name: FUN_100134dbc
// address: 0x100134dbc
// body: available
// range: 0x100134dbc-0x10013520b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100134dbc(long param_1,uint *param_2,long param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_1b0 [16];
  long alStack_1a0 [4];
  code *local_180;
  undefined *local_178;
  code *local_170;
  long local_168;
  long local_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined8 local_128 [25];
  
  puVar3 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_180 - extraout_x8;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_2[2] != 1) {
    uVar5 = (ulong)*param_2;
    FUN_100133430();
    if (uVar5 != 0) {
      if ((*(ulong *)(uVar5 + 0x10) != 0) && ((ulong)param_2[1] < *(ulong *)(uVar5 + 0x10))) {
        local_160 = lVar4;
        (**(code **)(lVar8 + 0x10))
                  (lVar10,uVar5 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                          *(long *)(lVar8 + 0x48) * (ulong)param_2[1],lVar4);
        _swift_bridgeObjectRelease(uVar5);
        (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(param_3 + 0x18));
        *(undefined8 *)(lVar10 + -0x20) = extraout_x8_01;
        *(long *)(lVar10 + -0x18) = lVar10;
        *(uint **)(lVar10 + -0x10) = param_2;
        puVar3 = &DAT_100a79f60;
        FUN_100004bb4(&DAT_100a79f60,&DAT_10080f8b0);
        local_178 = puVar3;
        _swift_allocObject();
        pcVar6 = FUN_100135b10;
        FUN_100615648(FUN_100135b10,lVar10 + -0x30,puVar3);
        lVar4 = 0;
        local_180 = pcVar6;
        __s8Dispatch0A13WorkItemFlagsVMa();
        local_170 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
        local_168 = lVar4;
        (*local_170)(lVar9,1,1,lVar4);
        puVar3 = &DAT_10099e6f0;
        _swift_allocObject(&DAT_10099e6f0,0x108,7);
        uVar11 = *(undefined8 *)param_2;
        uVar13 = *(undefined8 *)(param_2 + 6);
        uVar12 = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(puVar3 + 0x10) = uVar11;
        *(undefined8 *)(puVar3 + 0x28) = uVar13;
        *(undefined8 *)(puVar3 + 0x20) = uVar12;
        uVar12 = param_4[0x11];
        uVar11 = param_4[0x10];
        uVar13 = param_4[0x12];
        uVar15 = param_4[0x15];
        uVar14 = param_4[0x14];
        uVar17 = param_4[0x17];
        uVar16 = param_4[0x16];
        *(undefined8 *)(puVar3 + 0xd8) = param_4[0x13];
        *(undefined8 *)(puVar3 + 0xd0) = uVar13;
        *(undefined8 *)(puVar3 + 0xe8) = uVar15;
        *(undefined8 *)(puVar3 + 0xe0) = uVar14;
        *(undefined8 *)(puVar3 + 0xf8) = uVar17;
        *(undefined8 *)(puVar3 + 0xf0) = uVar16;
        uVar14 = param_4[9];
        uVar13 = param_4[8];
        uVar15 = param_4[10];
        uVar17 = param_4[0xd];
        uVar16 = param_4[0xc];
        uVar19 = param_4[0xf];
        uVar18 = param_4[0xe];
        *(undefined8 *)(puVar3 + 0x98) = param_4[0xb];
        *(undefined8 *)(puVar3 + 0x90) = uVar15;
        *(undefined8 *)(puVar3 + 0xa8) = uVar17;
        *(undefined8 *)(puVar3 + 0xa0) = uVar16;
        uVar16 = *(undefined8 *)(param_2 + 10);
        uVar15 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(puVar3 + 0xb8) = uVar19;
        *(undefined8 *)(puVar3 + 0xb0) = uVar18;
        *(undefined8 *)(puVar3 + 200) = uVar12;
        *(undefined8 *)(puVar3 + 0xc0) = uVar11;
        uVar12 = param_4[1];
        uVar11 = *param_4;
        uVar18 = param_4[3];
        uVar17 = param_4[2];
        *(undefined8 *)(puVar3 + 0x38) = uVar16;
        *(undefined8 *)(puVar3 + 0x30) = uVar15;
        *(undefined8 *)(puVar3 + 0x48) = uVar12;
        *(undefined8 *)(puVar3 + 0x40) = uVar11;
        uVar12 = param_4[5];
        uVar11 = param_4[4];
        uVar16 = param_4[7];
        uVar15 = param_4[6];
        *(undefined8 *)(puVar3 + 0x58) = uVar18;
        *(undefined8 *)(puVar3 + 0x50) = uVar17;
        *(undefined8 *)(puVar3 + 0x68) = uVar12;
        *(undefined8 *)(puVar3 + 0x60) = uVar11;
        *(undefined8 *)(puVar3 + 0x78) = uVar16;
        *(undefined8 *)(puVar3 + 0x70) = uVar15;
        *(undefined8 *)(puVar3 + 0x88) = uVar14;
        *(undefined8 *)(puVar3 + 0x80) = uVar13;
        *(long *)(puVar3 + 0x100) = param_1;
        FUN_100135bf4(param_2,local_128);
        FUN_1000408d0(param_4,local_128);
        lVar4 = param_1;
        _swift_retain();
        FUN_10060edd8();
        _swift_beginAccess();
        uVar11 = *(undefined8 *)(lVar4 + 8);
        puVar7 = &DAT_100a79f68;
        FUN_10003f840(&DAT_100a79f68,&DAT_100a79f60,&DAT_10080f8b0,
                      &TargetProtocolConformanceDescriptor_1008488a0);
        pcVar6 = local_180;
        FUN_1006170a4(uVar11,lVar9,FUN_100135bd4,puVar3,local_178,puVar7);
        local_178 = (undefined *)uVar11;
        _swift_release(pcVar6);
        _swift_release(puVar3);
        FUN_100040bb4(lVar9,&DAT_100a77040,&DAT_10080e910);
        (*local_170)(lVar9,1,1,local_168);
        _swift_beginAccess(lVar4,auStack_140,0,0);
        uVar11 = *(undefined8 *)(lVar4 + 8);
        _swift_beginAccess(lVar4,auStack_158,0,0);
        uVar1 = *(undefined1 *)(lVar4 + 0x10);
        local_168 = uVar11;
        _swift_retain(param_1);
        puVar3 = &DAT_100a77058;
        FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
        puVar7 = &DAT_100a77060;
        FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                      &TargetProtocolConformanceDescriptor_1008488bc);
        puVar2 = local_178;
        FUN_10060913c(uVar11,lVar9,uVar1,FUN_100135c30,param_1,puVar3,puVar7);
        _swift_release();
        _swift_release(puVar2);
        _swift_release(param_1);
        FUN_100040bb4(lVar9,&DAT_100a77040,&DAT_10080e910);
        (**(code **)(lVar8 + 8))(lVar10,local_160);
        return;
      }
      _swift_bridgeObjectRelease();
    }
  }
  local_128[0] = 0;
  FUN_10061630c(local_128);
  return;
}

